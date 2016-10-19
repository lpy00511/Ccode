var partition = function(a, p, r){
	var x = a[r-1];
	var i = p-1;
	for(var j = p; j < r-1; j++)
	{
		if(a[j] <= x)
		{
			i = i+1;
			var temp = a[i+1]；
			a[i+1] = a[j];
			a[j] = temp;
		}
	}
	var ans = a[i+1];
	a[i+1] = a[r-1];
	a[r-1] = ans;
	return i+1;
}
var qSort = function(a, p, r){
	if(p < r)
	{
		var q = partition(a, p, r);
		qSort(a, p, q-1);
		qSort(a, q+1, r);
	}
}
var main = function(){
	var a = [2,8,7,1,3,5,6,4];
	var p = 0;
	var r = a.length;
	qSort(a, p, r);
	return a;
}
console.log(main());