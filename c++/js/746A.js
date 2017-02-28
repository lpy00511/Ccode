function compote(){
	var a = [];
	for(var i = 1; i <= 3; i++)
	{
		a[i] = parseInt(readline());
	}
	while(a[1]*4 > a[3])
	{
		a[1] --;
	}
	while(a[1]*2 > a[2])
	{
		a[1] --;
	}
	var ans = a[1]+a[1]*2+a[1]*4;
	print(ans);
}