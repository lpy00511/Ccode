function merge(a, p, q, r){
	var n1 = q-p;
	var n2 = r-q;
	var L,R;
	for(var i = 0; i <= n1; i++)
	{
		L[i] = a[p+i];
	}
	for(var j = 0; j <= n2; j++)
	{
		R[j] = a[q+j];
	}
	L[n1+1] = Infinity;
	L[n2+1] = Infinity;
	var u = 1;
	var v = 1;
	for(var k = 1; k <= r; k++)
	{
		if(L[u] <= R[v])
		{
			a[k] = L[u];
			u++;
		}
		else{
			a[k] = R[v];
			v++;
		}
	}
}
function mergeSort(a, p, r){
	if(p < r)
	{
		var q = Math.floor((p+r)/2);
		mergeSort(a, p, q-1);
		mergeSort(a, q, r);
		merge(a, p, q, r);
	}
}
console.log(mergeSort([6,5,4,3,2,1], 0, 6));