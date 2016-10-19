function bubbleSort(){  //其中a为待排序数组
	var a = [1,2,3,4,5,6];
	var len = a.length;
	for(var i = len; i >= 2; i --)
	{
		for(var j = 0; j <= i-1; j ++)
		{
			if(a[j] <= a[j+1])
			{
				var temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	return a;
}
