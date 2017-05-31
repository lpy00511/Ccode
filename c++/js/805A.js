function compute(str){
	var a = readline().split(' ').map(x=>parseInt(x));
	//var a = str.split(' ');
	var l = a[0], r = a[1];
	if(r - l >= 1){
		print(2);
	}else{
		print(l);
	}
}
console.log(compute("3 6"));