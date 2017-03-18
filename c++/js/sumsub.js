function info(str){
	var a = str.split(" ").map(function(elem) {
		return parseInt(elem);
	});
	var len = a.length;
	var f=[];
	f[0] = a[0];
	for(var i = 1; i < len; i++){
		f[i] = a[i];
		f[i] = f[i-1]<0?a[i]:f[i-1]+a[i];
	}
	return f;
}
console.log(info("5 6 -1 5 4 -7"));