// var module = (function(){
// 	var N = 5;
// 	function print(x){
// 		console.log("This result is:"+x);
// 	}
// 	function add(a){
// 		var x = a+N;
// 		print(x);
// 	}
// 	return {
// 		description:"This is description",
// 		add:add
// 	};
// })();
// console.log(module.description);   //This is description
// module.add(10);   //This result is:15

// var a = readline().split(",").map(x=>+x);
// var n = a[0];
// var m = a[1];
// var array = readline();
var n = 9;
var m = 6;
var str = '[[1,2],[2,3],[7,8],[5,6],[7,9],[5,4]]';
var power = [25,34,23,45,16,51,29,38,47];
function info(str1){
	var arr = [];
	for(let i =0; i < str1.length; i++){
		if(Number(str1[i]) >= 0 && Number(str1[i]) <= 9 ){
			arr.push(Number(str1[i]));
		}
		else{
			continue;
		}
	}
	var obj = {};
	var j = 0;
	for(let i = 0; i < arr.length; i+=2){
		if(j < m){
			if(arr[i]<= arr[i+1]){
				obj[j] = [arr[i],arr[i+1]];
				j++;
			}
			else {
				obj[j] = [arr[i+1],arr[i]];
				j++;
			}
			
		}	
	}
	
	var sum = [];
	var k =0;
	for(let i = 1; i < m; i++){
		if(obj[i-1].indexOf(obj[i][0]) != -1 || obj[i-1].indexOf(obj[i][1]) != -1){
			if(obj[i].indexOf(obj[i-1][0]) == -1)
			{
				obj[i].push(obj[i][0]);
			}
			if(obj[i-1].indexOf(obj[i][1]) == -1){
				obj[i].push(obj[i][1]);
			}
		}
	}
	console.log(obj);
	var value1 = 0;
	var value2 = 0;
	for(let i = 0; i < n;i++){
		if(arr.indexOf(i+1) == -1){
			value2 += (power[i]);
		}
	}
	// value1  = sum - value2;
	if(value1 >= value2){
		// print(value1);
		console.log(value1);
	}
	else console.log(value2);
}
info(str);
