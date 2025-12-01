const date = document.getElementById("date");

setInterval(() => {
    date.innerHTML = new Date().toLocaleTimeString();
}, 1000);
