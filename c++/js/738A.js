var Interview = function(n, str){
	//var n = parseInt(readline());
	//var str = readline();
	var a;
	for(var i = 0; i < str.length; i++)
	{
		a = str.indexOf("ogo");
		for(var j = a; j<=j+3; j++)
		{
			 str[j]='*';
		}
	}
	return str;
}
console.log(Interview(7,"aogogogob"));