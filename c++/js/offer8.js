function jumpFloor(number)
{
    // write code here
    if( number== 0 || number == 1){
		return number;
	}
	var arr=[];
	arr[0] = 0,arr[1]=1,arr[2]=2;
	for(var i = 3; i <= number; i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	return arr[number];
}