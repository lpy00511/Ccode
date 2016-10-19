function compare(value1, value2){
	if(value1 < value2)
	{
		return 1;
	}
	else if(value1 > value2){
		return -1;
	}
	else{
		return 0;
	}
}
function main(){
	var values = [0,1,5,10,15];
	values.sort(compare);   //sort方法先调用每个数组项的toString()方法，然后比较得到的字符串
	return values; 
}
console.log(main());