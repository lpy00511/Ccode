/****
* create by lpy , on 20170308 
*
*/
function main(str){
	var welfare = str.split(" ").map(x=>+x);
	var n = welfare.length;
	/*
	var n = parseInt(readline());
	var welfare = readline().split(" ").map(x=>+x);
	*/
	var spend=0;
	if(welfare.length === 1){
		spend = 0;
	}
	else{
		var sum = 0;
		var maximum = 0;
		for(var i = 0; i < n; i++){
			sum += welfare[i];
			maximum = Math.max(maximum, welfare[i]);
		}
		spend = n*maximum-sum;
	}
	print(spend);
}
console.log(main("12"));