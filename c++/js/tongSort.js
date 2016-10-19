function tongSort(a){
	var b = [];
	var c = [];
	var n = a.length;
	var k = Math.max.apply(null,a);
	for(var l = 0; l <= k; l++){
		b[l] = 0;
	}
	for(var i = 0; i < n; i++)
	{
		b[a[i]]++;
	}
	var t = 0;
	for(var j = 0; j <= k; j++)
	{
		for(var v = 1; v <= b[j]; v++){
			c[t++] = j;
		}
	}
	return c;
}
console.log(tongSort([1,2,3,4,5,1,2,3,4,5]));
  