function info (str) {
	// body... 
	var a = str.split(" ").map(function(elem) {
		return parseInt(elem);
	});
	var n = a.length;
	var f = [];
	for(var i = 0; i < n; i++){
		f[i] = 1;
		for(var j = 0; j <= i; j++){
			if(a[j] < a[i]){
			f[i] = f[i]>(f[j]+1)?f[i]:(f[j]+1);
			}
		}
	}
	return f;
}
console.log(info("1 9 4 7 5 8 7 1 6 7"));




