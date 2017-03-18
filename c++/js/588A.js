function cmp(x){
	return parseInt(x);
}function main(n){
	var n = parseInt(readline());
	var a = [];
	for(var i = 0; i < n; i++)
	{
		a[i] = readline().split(" ").map(cmp);
	}
	//var a = [[1,3],[2,1],[3,2]];
	var minimum = 200;
	var sum = 0;
	for(var j = 0; j < n; j ++)
	{
		if(a[j][1] < minimum)
		minimum = a[j][1];
		sum += minimum*a[j][0];
	}
	print(sum);
}
console.log(main(3));
/*
12
70 11
74 27
32 11
26 83
57 18
97 28
75 43
75 21
84 29
16 2
89 63
21 88
 */