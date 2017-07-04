var elMsg = document.getElementById("feedback");
var elUsername = document.getElementById("username");

function checkUsername(minLength){
	if(elUsername.value.length < 5){
		elMsg.textContent  = 'Username must be 5 charactors or more';
	}else{
		elMsg.textContent='';
	}
}
elUsername.addEventListener('blur',function(){
	checkUsername(5);
},false);