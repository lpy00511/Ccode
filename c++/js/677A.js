var friends = function(){
	var num = "6 5".split(' ').map(Number);
	var str = "7 6 8 9 10 5".split(' ').map(Number);
	//var num = readline().split(' ').map(Number);
	/*var str = readline().split(' ').map(function(elem) {
		return parseInt(elem);
	});
	*/
	var n = num[0];
	var h = num[1];
	var sum = n;
	for(var i = 0; i < str.length; i++)
	{
		if(str[i] > h){
			sum += 1;
		}
	}
	return sum;
}
console.log(friends());
