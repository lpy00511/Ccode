var selectSort = function(a){
	var min, temp;
	for(var i = 0; i < a.length-1; i++)
	{
		min = i;
		for(var j = i+1; j < a.length; j++)
		{
			if(a[j] < a[i])
			{
				min = j;
			}
			
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	return a;
}
console.log(selectSort([6,5,4,3,2,1]));