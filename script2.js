const users = [];

for (let i = 1; i <= 100; i++) {
  users.push({
    id: i,
    name: `User${i}`,
    age: Math.floor(Math.random() * 50) + 18, // age between 18 and 67
    email: `user${i}@example.com`
  });
}
const EVERY=users.every(user=>user.age<67)//the every method check the specific condition for every array elemenat than return true or false if the condition is fale in any stage it retun false
console.log(EVERY);
const names = users
//the filter mmethod filter the array element and return those element which meet the condition
  .filter(user => user.age > 20 && user.age < 30)
  //the map method give the array elemnt by iterating our them
  .map(user =>{
    return{ 
      name:user.name,
      age:user.age
    
    }});

console.log(names)
//the fins method give the first elemnt which meet the given condition only the first one not chech the others
const find=users.find(user=>user.age<20)
console.log(find);

console.log(users);

//the fill method fill the array by given element it get three the firt value the second index and the last index
const fill=users.fill({id:2,name:"sameer ali",age:20,email:"sameer230gmail.com"},1,2)
console.log(fill);

//the sort method arrange the arrray element in  ascending or descending order
users.sort((a,b)=>a.age-b.age)
console.log(users);
users.forEach(element => {
  console.log(element);
  
});
//the some methiod is the appositive of every method and return true if the condition meet any of the array element
const some=users.some(user=>user.age<20)
console.log(some);

