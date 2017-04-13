/*
var array = [1,2,3];
//传统写法
array.forEach( function(v, index) {
	// statements
	//console.log(v);
});
//es6
//array.forEach( v=> console.log(v));
var str = '1234';
var arr = str.split("").map(x=>+x);
console.log(arr[0]);

var info = function(name){
	this.name = name;
}
// 单体模式
var Singleton = function(name){
    this.name = name;
    this.instance = null;
};
Singleton.prototype.getName = function(){
    return this.name;
}
// 获取实例对象
function getInstance(name) {
    if(!this.instance) {
        this.instance = new Singleton(name);
    }
    return this.instance;
}
// 测试单体模式的实例
var a = getInstance("aa");
var b = getInstance("bb");
console.log(a===b);

//类的定义
class Animal{
	constructor(name){
		this.name = name;
	}
	sayName(){
		console.log('my name is '+this.name);
	}
}
//类的继承
class Programmer extends Animal{
	constructor(name){
		//直接调用父类构造器进行初始化
		super(name);
	}
	program(){
		console.log("i'm coding...");
	}
}
var animal = new Animal('dummy');
wayou = new Programmer('wayou');
animal.sayName();//my name is dummy
wayou.sayName();//my name is wayou
wayou.program();//i'm coding...

//通过字面量创建对象
var human ={
	breathe(){
		console.log('breathing ...');
	}
};
var worker = {
	__proto__:human,//设置此对象的原型为human，相当于继承human
	company:'freelancer',
	work(){
		console.log('working ...');
	}
};
human.breathe();//breathing ...
worker.breathe();//breathing ...

//模板字符串
//普通字符串
//`in JavaScript '\n' is a line-feed.`
//多行字符串
/*`in JavaScript this is
not legal.`
*/
console.log(`string text line 1
string text line 2`);
 //字符串中嵌入变量
 var name = "Bob", time = "today";
 console.log(`hello ${name}，how are you ${time}?`);

var x = 1;
var y = 2;
console.log(`${x} + ${y} = ${x+y}`);//1 + 2 = 3
console.log(`${x} + ${y*2} = ${x+y * 2}`);//1 + 4 = 5
var obj = {x:1, y:2};
console.log(`${obj.x + obj.y}`);//3
//数组的解构赋值
//之前的数组声明和给变量赋值
/*
var value=[1,2,3,4,5];
var el1 = value[0];
var el2 = value[1];
var el3 = value[2];
console.log(el1);
*/
//es6
//var value=[1,2,3,4,5];
var [el1,el2,el3] = [1,2,3,4,5];
console.log(el3);
[el1,el2]=[el2,el1];
console.log(el2);
var [e1, e2, e3,...tail] = [1,2,3,4,5];
console.log(tail);//[ 4, 5 ]

var [x,y] = getVal(), [name,,age] = ['wayou','male','secrect'];
function getVal(){
	return [1,2];
}
console.log(`x:${x},y:${y}`);  //x:1,y:2
console.log(`name:${name},age:${age}`); //name:wayou,age:secrect

var person = {name:{firstName:"John", lastName:"Doe"}};
var {name:{firstName, lastName}} = person;
console.log(`firstName:${firstName},lastName:${lastName}`);
/*
function finduser(userId, options){
	if(options.includeProfile) ...
	if(options.includeHistory) ...
}
//es6
function finduser(userId, {includeProfile,includeHistory}){
	if(includeProfile) ...
	if(includeHistory) ...
}
*/

/*var start = new Date();
setTimeout(function(){
	var end = new Date();
	console.log("timeout");
},500);
setImmediate(function(){
	var end = new Date();
	console.log("immdiate");
});
process.nextTick(function(){
	var end = new Date();
	console.log('processnext tick');
});
while(new Date()-start<500){};
*/

/*
var str = "welcome to Meituan Dianping";
var pattern = /(meituan)+|(dianping)+/ig;
var output = pattern.test(str);
console.log(output);

*/
function cmp(x, y){
	return x-y;
}
//a = readline().split(" ").map(x=>+x);
//b = readline().split(" ").map(x=>+x);
function meituan(){
	var a = [1,3,5,8,0,2], b=[10,8,5,2,0];
	var c=[];
	var k = 0;
	a.sort(cmp);
	b.sort(cmp);
	var len1 = a.length;
	var len2 = b.length;
	var i = 0, j = 0;
	while(i < len1 && j < len2){
		if(a[i] > b[j]){
			j ++;
		}
		else if(a[i] < b[j]){
			i++;
		}
		else if(a[i] === b[j])
		{
			c[k++] = a[i];	
			i++;
			j++;
		}
	}
	return c;
}
console.log(meituan());
var someArray = ["a","b","c"];
for(v of someArray){
	console.log(v);
}

for(var i = 1; i <= 2; i++){
	var j = 10;
	console.log(i);  //1,2
}
console.log(j);

function fun(n,o){
	console.log(o);
	return {
		fun:function(m){
			return fun(m,n);
		}
	};
}
var a = fun(0);a.fun(1);a.fun(2);a.fun(3);
var b = fun(0).fun(1).fun(2).fun(3);
var c = fun(0).fun(1);c.fun(2);c.fun(3);