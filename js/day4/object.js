function Person(name,age,job){
	this.name = name;
	this.age = age;
	this.job = job;
	this.friends = ["Shelby","Court"];
}
Person.prototype = {
	constructor:Person,
	sayName:function(){
		console.log(this.name);
	}
}
var person1 = new Person("Nicholas",29,"software Engineer");
var person2 = new Person("Greg",27,"Doctor");
person1.friends.push("Van");
console.log(person1.friends);
console.log(person2.friends);
console.log(person1.friends === person2.friends);
console.log(person1.sayName === person2.sayName);


function SuperType(name){
	this.name = name;
	this.colors = ["red","blue","green"];
}
SuperType.prototype.sayName = function(){
	console.log(this.name);
};
function SubType(name,age){
	SuperType.call(this,name);//继承属性
	this.age = age;
}
SubType.prototype = new SuperType();
SubType.prototype.constructor = SubType;
SubType.prototype.sayAge = function(){
	console.log(this.age);
};
var instance1 = new SubType("Nicholas",29);
instance1.colors.push("black");
console.log(instance1.colors);
instance1.sayName();
instance1.sayAge();
var instance2 = new SubType("Greg", 27);
console.log(instance2.colors);
instance2.sayAge();
instance2.sayName();
console.log(SuperType.prototype.isPrototypeOf(instance2));