// 写一个repeat函数，var req = repeat(fn, internal, times); req();//执行times次fn，每次相隔时间为interval
var fn = function(){
	
	//console.log('hello');
}
function repeat(fn, internal,times){
	for(var i = 0;i < times;i++){
		setTimeout(fn,internal*i);

	}
}
// repeat(fn, 2000,3);
/* 写一个函数A，奇数次输出1，偶数次输出2，不允许有全局变量
 *
 ````javascript
   A(); // 输出1
   A(); // 输出2
   A(); // 输出1
 闭包的作用：
 1.setTimeout/setInterval
 2.回调函数（callback）
 3.事件句柄（event handle）
*
*/ 
function A(){
	var x = 0;
	return function(){
		// body...
		x ++;
		if(x & 1){
			//console.log('1');
		}
		//else console.log('2');
	}
}
var cnt = A();
cnt();
cnt();
cnt();

var name = "The Window";
var object = {
　　　　name : "My Object",
　　　　getNameFunc : function(){
　　　　　　return function(){
　　　　　　　　return this.name;
　　　　　　};
　　　　}
　　};
////console.log(object.getNameFunc()());
var name = "The Window";
　　var object = {
　　　　name : "My Object",
　　　　getNameFunc : function(){
　　　　　　var that = this;
　　　　　　return function(){
　　　　　　　　return that.name;
　　　　　　};
　　　　}
　　};
////console.log(object.getNameFunc()());


//用ES5写一个原型继承，比如B 继承 A
var A = function(){
	this.name = 'A name';
};
A.prototype.getName = function(){
    return this.name;
};
var B = function(){
	this.name= 'B name';
};
B.prototype = new A();
var a = new A();
var b = new B();
a.name = 'hello';
// //console.log(a.getName());
// //console.log(b.getName());

/*
数组去重的几种方法：
1.遍历数组法
2.对象键值法
3.数组下标判断法
4.排序后相邻去除法
*/
var arr = [1, 2, 1, '1','[]', '{}',[], '{}'];
function unique1(){
	var newarr = [];
	for(var i = 0; i < arr.length; i++){
		if(newarr.indexOf(arr[i]) === -1){
			newarr.push(arr[i]);
		}		
	}
	return newarr;
}
//console.log(unique1());
function unique2(){
	var new_arr = [arr[0]];
	for(var i = 1; i < arr.length; i++){
		if(arr.indexOf(arr[i]) == i)
			new_arr.push(arr[i]);
	}
	return new_arr;
}
////console.log(unique2());

// 柯里化函数
function add1(num1){
	return function(num2){
		return num1+num2;
	}
}
var add3 = add1(3);
var add5 = add1(5);
//console.log(add3(5));  //8
//console.log(add5(3));  //8

add = function(num1, num2){
	return num1+num2;
}
curry = function(fn){
	args = [].slice.call(arguments,1);
	return function(){
		[].push.apply(args,arguments);
		return fn.apply(this,args);
	}
}
var add5 = curry(add,11);
//console.log(add5(2));

function printHello(ready){
	return new Promise((resolve, reject) => {
		if(ready){
			resolve("hello");
		}else {
			reject("Good bye");
		}
	});
}
function printWorld(){
	//console.log("world");
}
function printExclamation(){
	//console.log('!');
}
printHello(true)
	.then(function (message){
	//console.log(message);
}).then(printWorld)
	.then(printExclamation);

console.log([]===[]);





