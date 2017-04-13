// 写一个repeat函数，var req = repeat(fn, internal, times); req();//执行times次fn，每次相隔时间为interval
var fn = function(){
	
	console.log('hello');
}
function repeat(fn, internal,times){
	for(var i = 0;i < times;i++){
		setTimeout(fn,internal*i);

	}
}
//repeat(fn, 2000,3);
// 写一个函数A，奇数次输出1，偶数次输出2，不允许有全局变量
 
//   ````javascript
//    A(); // 输出1
//    A(); // 输出2
//    A(); // 输出1
//    ...
function A(){
	var x = function(){
		console.log('x');
	};
	function A1() {
		// body...
		return x;
	}
	return A1;
}


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
console.log(a.getName());
console.log(b.getName());
