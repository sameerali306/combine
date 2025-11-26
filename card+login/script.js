function login() {
    const username=document.getElementById("username").value;
    const password=document.getElementById("password").value;

    if (username==="sameer ali" && password==="12345") {
        document.querySelector(".login-box").style.display="none";
         document.getElementById("logo").style.display="block";
        
    } else {
        alert("invalide iser name or password!!")
        
    }
    
}
console.log(hhhh);
