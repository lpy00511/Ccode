function Person(){

}
Person.prototype.name = "lulu";
Person.prototype.age = 28;
Person.prototype.job = "software Engineer";
Person.sayName = function(){
	alert(this.name);
};
var keys = Object.keys(Person.prototype);
console.log(keys);

var p1 = new Person();
p1.name = "lpy";
p1.age = "26";
var p1keys = Object.keys(p1);
console.log(p1keys);

var keys2 = Object.getOwnPropertyNames(p1);
console.log(keys2);

for(var prop in p1){
	if(p1.hasOwnProperty(prop)){
		console.log(prop);
	}
}


function Person(){
}
var friend = new Person();

Person.prototype = {
	constructor:Person,
	name:"lulu",
	age:28,
	job:"software engineer",
	sayName:function(){
		console.log(this.name);
	}
};

var person1 = new Person();
console.log(person1 instanceof Object);
console.log(person1 instanceof Person);
console.log( person1.constructor == Person);
console.log( person1.constructor == Object);


function Person2(){

}
Person2.prototype = {
	constructor:Person2,
	name:"lulu",
	age:28,
	job:"web",
	friends:["lpy","luniuniu"],
	sayName:function(){
		console.log(this.name);
	}
};
var person3 = new Person2();
var person4 = new Person2();
person3.friends.push("niuniu");
console.log(person3.friends);
console.log(person4.friends);

function SuperType(name){
	this.name = name;
	this.colors=["red","green","blue"];
}
SuperType.prototype.sayName = function(){
	console.log(this.name);
}
function SubType(name,age){
	//继承了SuperType
	SuperType.call(this,name);
	this.age = age;
}
//继承方法
SubType.prototype = new SuperType();
SubType.prototype.constructor = SubType;
SubType.prototype.sayAge = function(){
	console.log(this.age);
};
var instance1 = new SubType("lulu","28");
instance1.colors.push("black");
console.log(instance1.colors);
instance1.sayAge();
instance1.sayName();
var instance2 = new SubType("lpy","26");
console.log(instance2.colors);
instance2.sayAge();
instance2.sayName();


//原型式继承
var person = {
	name:"lulu",
	friends:["大白","小花","阿珂"]
};
var anotherperson = Object.create(person);
anotherperson.name = "Grag";
anotherperson.friends.push("lpy");
var yetAnotherperson = Object.create(person);
yetAnotherperson.name="Linda";
yetAnotherperson.friends.push("niuniu");
console.log(person.friends);

var my_json_string = '{"prop":"val"}';
var my_obj = JSON.parse(my_json_string);
console.log(my_obj.prop == 'val');
var my_other_json_string = JSON.stringify(my_obj);
console.log(my_other_json_string);



