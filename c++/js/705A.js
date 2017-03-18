function hulk(n){
	
	var n = parseInt(readline());
	var temp = "";
	for(var i = 1; i <= n; i++)
	{
		temp += "I ";
		if(i % 2 == 1){
			temp += "hate";
		}
		else {
			temp += "love";
		}
		if(i === n){
			temp += " it";
		}
		else {
			temp += " that ";
		}
	}
	print(temp);
	return temp;
}
console.log(hulk(4));