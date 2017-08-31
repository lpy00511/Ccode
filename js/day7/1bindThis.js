this.num = 9;
var mymodule = {
	num:81,
	getNum:function(){
		return this.num;
	}
};
console.log(mymodule.getNum());
mymodule.getNum();
var getNum = mymodule.getNum;
console.log(getNum());
var boundGetNUm = getNum.bind(mymodule);
console.log(boundGetNUm());
var date = new Date('6-27-2017');
console.log(date.toString());
console.log(date.toLocaleString());
console.log(date.valueOf());
console.log(+date);
//时间对象操作方法
// toString()  包括时区信息
// toLocaleString()  不包括时间信息
//基本用不到
//valueOf()  返回时间对象对应的毫秒数
//+date,也是返回时间对应的毫秒数
// 对两个对象进行 > 或 < 比较时，先用toString方法将对象转化成基本类型然后再比较
//


var allFives = new Date('2005-04-15'); 
console.log(allFives);
var now = new Date(true);
console.log(now);
var now1 = new Date("11/26/2017 17:55:55");
console.log(now1);

var date1 = new Date(2007,0,1);
var date2 = new Date(2007,1,1);
console.log(date1 < date2); //true
console.log(date1 > date2); //false

//var commonTime = new Date(Date.UTC(year, month - 1, day, hour, minute, second));
//console.log(commonTime);

// var fn;
// fn();
// fn = function(){
// 	console.log('hi');
// }


function createComparisonFunction(propertyName){
	return function(object1,object2){
		var value1 = object1[propertyName];
		var value2 = object2[propertyName];
		return value1 - value2;
	};
}
var data = [{name:"Zachary",age:30},{name:"Nicholas",age:29}];
data.sort(createComparisonFunction("name"));
console.log(data[0].name);
data.sort(createComparisonFunction("age"));
console.log(data[0].name);

function factorial(num){
	if(num <= 1){
		return 1;
	}else{
		return num * arguments.callee(num-1);
	}
}
var trueFactorial = factorial;
factorial = function(){
	return 0;
}
console.log(trueFactorial(5));
console.log(factorial(5));
console.log(factorial.name);

var str = "1234567890";
var str1 = str.charAt(3); //参数为索引值，从0开始，返回参数位置的字符
console.log(str1); //4
var str2 = str.charCodeAt(3); //参数为索引，返回索引位置的字符的ASCII码。
console.log(str2); //52
var str3 = str.concat(str,'abc'); //将两个字符串连接，结果是连接后的新字符串
console.log(str3); //12345678901234567890abc
var str4 = str.indexOf('4',3); //从字符创中从第3个位置从前到后查找子串的位置
console.log(str4);  //3
var str41 = str.lastIndexOf('4', 7); //从字符创中从第3个位置从后到前查找子串的位置
console.log('str41 '+str41);//str41 3
var str50 = str.split(''); 
console.log(str50); //[ '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' ]
var str5 = str.slice(-2,4);
console.log('str5 '+str5); //str5
var str6 = str.substring(4, -2);//从两个参数中比较小的开始截取
console.log(str6); //1234
var str7 = str.substr(2,3); //参数形式substr(start,len) 从开始位置截取固定长度字符
console.log('str7 '+str7);// str7 345

var string = " hello my girl ";
var string1 = string.trim();
console.log(string1);

var string2 = string.trimLeft();
var string3 = string.trimRight();
console.log(string2+'/'+string3);


console.log(Math.random().toString(36));

var values = [1,2,3,4,5,6,7,8,9];
var max = Math.max.apply(Math,values);
console.log(max);

var color = "red";
var o = {color:"blue"};
function sayColor(){
	console.log(this.color);
}
var objectSayColor = sayColor.bind(o);
objectSayColor();

var sss = "abcdef";
sss.color = "red";
console.log(sss.color);

var a = "abcd";
a.length = 10;
console.log(a.length);


// let sstr = 'goo';
// sstr.padStart(15,'le');
// console.log(sstr);

console.log('今天是星期'+'日一二三四五六'.charAt(new Date().getDay()));

var uri = "http://www.google.com/lulu loveyou.html#honey";
console.log(encodeURI(uri));
console.log(encodeURIComponent(uri));











