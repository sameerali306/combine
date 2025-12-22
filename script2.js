const users = [];

for (let i = 1; i <= 100; i++) {
  users.push({
    id: i,
    name: `User${i}`,
    age: Math.floor(Math.random() * 50) + 18, // age between 18 and 67
    email: `user${i}@example.com`
  });
}
const EVERY=users.every(user=>user.age<67)
console.log(EVERY);
const names = users
  .filter(user => user.age > 20 && user.age < 30)
  .map(user =>{
    return{ 
      name:user.name,
      age:user.age
    
    }});

console.log(names);
const find=users.find(user=>user.age<20)
console.log(find);

console.log(users);




