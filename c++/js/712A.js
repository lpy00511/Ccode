var n = parseInt(readline());
	var a = readline().split(" ");
	var len = a.length;
	var b = [];
	for(var i = 0; i < n-1; i++)
	{
		b[i] = Number(a[i])+Number(a[i+1]);
	}
	b[n-1] = Number(a[n-1]);
    print(b.join(" "));