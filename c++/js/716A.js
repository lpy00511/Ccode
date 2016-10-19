function computer(a, c){
	var b = readline().split(" ");
	var n = b[0];
	var c = b[1];
    var a = readline().split(" ");
	var len = a.length;
	var ans = 1;
	for(var j = 0; j < len-1; j++)
	{
		if((a[j+1] - a[j])<=c ){
			++ans;
		}
		else {
			ans = 1;
		}
	}
	print(ans);
}
console.log(computer([1,3,5,7,9,10], 1));