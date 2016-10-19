function countSort(a, k, n){
	var c=[];
	var b=[];
	for(var i = 0; i <= k; i++){
		c[i] = 0;                   //c数组的范围是a数组中最大数值
	}
	for(var j = 0; j < n; j ++){    //a数组默认是从0开始
		c[a[j]] ++;
	}
	for(var l = 1; l <= k; l++){
		c[l] = c[l]+c[l-1];    //统计小于等于该元素的个数 
	}
	for(var v = n-1; v >= 0; v--){
		b[c[a[v]]-1] = a[v];
		c[a[v]] --;
	}
	return b;
}

console.log(countSort([10,9,8,7,6,5,4,3,2,1], 10, 10));