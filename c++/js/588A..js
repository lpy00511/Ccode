function cmp(x){
	return parseInt(x);
}
function main(n){
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
	return sum;
}
console.log(main(3));