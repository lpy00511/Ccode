
	var a=[];
	var n, k, temp;
	a = readline().split(' ').map(Number);
	/*a = str.split(" ").map(function(elem) {
		return parseInt(elem);
	});*/
	n = a[0];
	k = a[1];
	var ans = 240-k;
	var sum = 0;
	for(var i = 1; i <= n; i++)
	{
		sum += 5*i;
		if(sum > ans)
		{
			temp = i-1;
			break;
		}
		else{
			temp = i;
		}
	}
	print(temp);