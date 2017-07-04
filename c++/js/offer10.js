function rectCover(number){
	var a = [];
	a[1] = 1,a[2] = 2;
	for(var i = 3; i <= number; i++){
		a[i] = a[i-1]+a[i-2];
	}
	return a[number];
}
console.log(rectCover(6));