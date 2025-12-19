let items = [
  { item: 1, Name: "laptop", price: 50000, quantity: 1 },
  { item: 2, Name: "mobile", price: 20000, quantity: 5 },
  { item: 3, Name: "washing Machine", price: 60000, quantity: 2 },
  { item: 4, Name: "fan", price: 10000, quantity: 6 },
  { item: 5, Name: "AC", price: 90000, quantity: 3 },
];

const filteredItems = items.filter((item) => {
    if (item.price<=50000) {
        let totalPrice = item.price * item.quantity;
  return totalPrice <= 500000;
    }
  
});

console.log(filteredItems);


