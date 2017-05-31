function Person(){
}
// Person.prototype.name = "Nicholas";
// Person.prototype.age = "29";
// Person.prototype.job = "Software Engineer";
// Person.prototype.sayName = function(){
// 	console.log(this.name);
// }
// var person1 = new Person();
// var person2 = new Person();
// person1.name = "Greg";
// console.log(person1.name);
// delete person1.name;
// console.log(person1.name);
Person.prototype = {
	constructor:Person,
	name:"Nicholas",
	age:"29",
	job:"software Engineer",
	friends:["Shelby","Court"],
	sayName:function(){
		console.log(this.name);
	}
};
var person1 = new Person();
var person2 = new Person();
person1.friends.push("Van");
console.log(person1.friends);
console.log(person2.friends);


String.prototype.startsWith = function(text){
	return this.indexOf(text) == 0;
};
var msg = "Hello world!";
console.log(msg.startsWith("Hello"));
