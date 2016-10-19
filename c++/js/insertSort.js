var inSort = function(a){
	var j;
	for(j = 1; j < a.length; j++)      //n-1
	{
		var key = a[j];                 //n-1
		i = j-1;                        //n-1
		while(i >= 0 && a[i] > key)     // Tj
		{
			a[i+1] = a[i];
			i --;
		}
		a[i+1] = key;                    //n-1
	}
}
var main = function(){
	var a = [5,2,4,6,1,3];
	inSort(a);
	return a;
}
console.log(main());
/*
插入排序的 js实现
插入排序的时间复杂度：
（1）最优情况是当数组已经排好序 则Tj = n-1;
	总的时间复杂度即为O（n）。
 (2) 最坏情况是数组已经反向排序，则Tj = n*(n+1)/2-1;
    总的时间复杂度为 O(n^2)。

  
*/