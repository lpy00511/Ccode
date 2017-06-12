function jumpFloorII(number){
	if(number == 0 || number == 1){
		return number;
	}
	var arr=[];
	arr[0] =0,arr[1]=1;
	for(var i = 2; i <= number; i++){
		var sum = 0;
		for(var j = 1; j <= number; j++){
			if(i-j < 0){
				break;
			}
			sum += arr[i-j];
		}
		arr[i] = sum+1;
	}
	return arr[number];
}
console.log(jumpFloorII(1));