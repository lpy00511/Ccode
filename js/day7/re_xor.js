function fun(){
	console.log(arguments.length);
}
fun(1,2,3,4,5);

function getRandomInt(min,max){
	return Math.floor(Math.random()*(max-min+1))+min;
}






// var data=[1,3,4] ; 
// var sum=0;
// var val;
// data.forEach(function(val,index,arr){
//   console.log(arr[index]==val);  // ==> true
//   val=val+1;
//   return val;
  //sum+=val;         
// })

// for(var i of data){
// 	console.log(i);
	
// }
