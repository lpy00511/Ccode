function cmp(s){
	var a = s.split(" ");
	var a1= a[0];
	var a2 = a[1];
	var c = a2-a1;
	if(a1 <= a2)
	return c;
}
console.log(cmp("2 3333333"));