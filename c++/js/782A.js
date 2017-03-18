

function main(str){
	var socks = [];
	socks = str.split(" ").map(x=>+x);
	var n = socks.length;
	/*
	var n = parseInt(readline());
	var socks=[];
	socks = readline().split(" ").map(x=>+x);
	*/
	var a=[];
	var l = 0;
	var maximum = 0;
	for(var i = 0; i < 2*n; i++){
		if(a[socks[i]]){
			l --;
		}
		else{
			l++;
			a[socks[i]] = true;
		}
		maximum = Math.max(maximum,l);
	}
	//print(maximum);
	return maximum;
}
console.log(main("2 1 1 3 2 3"));






