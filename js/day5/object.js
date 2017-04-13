var book ={
	_year:2004,
	edition:1
};
Object.defineProperty(book,"name",{
	get:function(){
		return this._year;
	},
	set:function(newValue){
		if(newValue > 2004){
			this._year = newValue;
			this.edition += newValue-2004;
		}
	}
});
console.log(book._year);
book.name = 2005;
console.log(book);
var descriptor = Object.getOwnPropertyDescriptor(book,"name");
console.log(descriptor.value);
console.log(descriptor.configurable);
console.log(descriptor.get);
/*创建对象的方式
*****
*（1）工厂模式：用函数封装以特定接口创建对象的细节
*工厂模式虽然解决了创建多个相似对象的问题，但却没解决对象的识别问题
*/
function createPerson(name, age, job){
	var o = new Object();
	o.name = name;
	o.age = age;
	o.job = job;
	o.sayName = function(){
		console.log(this.name);
	};
	return o;
}
// var person1 = createPerson("Nicholas", "29", "software Engineer");
// var person2 =createPerson("Greg", "27", "Doctor");
// console.log(person1);
/****
*构造函数模式：可用来创建特定类型的对象，像Object和Array这样的原生构造函数，在于形式会自动出现在执行环境中。
*也可用来创建自定义的构造函数，从而定义自定于义对象类型的属性和方法。
*note：构造函数本身也是函数，只不过可以用来创建对象而已。
* */
function Person(name, age, job){
	this.name = name;
	this.age = age;
	this.job = job;
	this.sayName = function(){
		console(this.name);
	};
}
var person1 = new Person("Nicholas", "29", "software Engineer");
var person2 = new Person("Greg", "27", "Doctor");




