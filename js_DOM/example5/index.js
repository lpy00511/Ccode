function toArray(arrayLikeObject){
	return Array.prototype.slice.call(arrayLikeObject);
}
function f(x, y){
console.log(x, y);
return toArray(arguments);
}
//console.log(f('a','b','c'));
//***********异常捕获：×××××
function getPerson(id){
	if(id<0){
		throw new Error('ID must not be negative:'+id);
	}
	return {id:id};
}
function getPersons(ids){
	'use strict';
	var result = [];
	ids.forEach(function (id){
		try{
			var person = getPerson(id);
			result.push(person);
		}catch(exception){
			console.log(exception);

		}
	});
	return result;
}
//console.log(getPersons([2,-5,123]));
//********通过IIFE引入新的作用域：为了解决闭包所带来影响**********
function print_x(){
	var results=[];
	for(var i = 0; i<5;i++){
		(function(){   //open IIFE
	 		var i2 = i;
			results.push(function(){return i2}());
		}()); //close IIFE(立即调用函数表达式)
	}
	return results;
}
//console.log(print_x());
//***************对象和构造对象*******************
var jane={
	name:'jane',
	describe:function (){
		return 'Person named '+this.name;  //以函数为值的属性被称为方法，它们使用this对调用它们的对象进行引用。
	}
};
jane.name='Jane';  //set
jane.newProperty = 'abc'; //add
console.log(jane.name);
console.log(jane.describe());
console.log('newProperty' in  jane);
console.log(jane);
(function delete_x(){
	delete jane.newProperty;
	return jane;
}());
//console.log(jane);
//对对象中方法的提取，使用bind()方法，它会创建一个this总是指向给定值的新函数：
var func2 = jane.describe.bind(jane);
var func1 = jane.describe;
//console.log(func1());
//console.log(func2());
/******************数组*****************/
var arr=[];
console.log(arr[0]);
arr.foo =123;
console.log(arr.foo);
['a','b','c'].forEach(
	function (elem,index){
		console.log(index+'.'+elem);
});
[1,2,3].map(function(x) {console.log(x*x)});

