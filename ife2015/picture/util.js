var arr = new Array();
var tosString = Object.prototype.toString;
function fn(){

}
function isFunction(fn){
	return tosString.call(fn) === '[object Function]';
}
function isArray(arr){
	return toString.call(arr) === '[object Array]';

}
/*对象克隆*/
var a='1';
var b = a;
b = '2';
console.log(b);
console.log(a);
var fn1 = function(){
	return 1;
}
var fn2 = fn1;
fn2 = function(){
	return 2;
}
console.log(fn1());
console.log(fn2());
var srcObj = {
    a: 1,
    b: {
        b1: ["hello", "hi"],
        b2: "JavaScript"
    }
};
function cloneObject(src){
	var result=new Array;
	var ket;
	for(key in src){
		result[key] = src[key];
	}
	return result;
}
var oNew = cloneObject(srcObj);
console.log(oNew.b.b1);
//oNew.b.b2="c++";
//console.log(srcObj.b.b2);

//浅克隆   通过修改新对象时，原对象的值也被修改
//下面的是深度克隆
function isClass(O){
	if(O==null)  return "Null";
	if(O==undefined) return "Underfined";
	return Object.prototype.toString.call(O).slice(8,-1);
}
function deepClone(src){
	var result,oClass = isClass(src);
	if(oClass === "Object"){
		result={};
	}
	else if(oClass === "Array"){
		result = [];
	}
	else {
		return src;
	}
	for(key in src){
		var copy = src[key];
		if(isClass(copy) == "Object"){
			result[key] = arguments.callee(copy); //递归调用
		}else if(isClass(copy) == "Array"){
			result[key] = arguments.callee(copy);
		}else {
			result[key] = src[key];
		}
	}
	return result;
}
var oNew1 = deepClone(srcObj);
oNew1.b.b2="c++";
console.log(oNew1.b);
console.log(srcObj.b);
//js  indexOf() 实现数组去重
function uniqArray(arr){ 
	var result=[];
	for(var i = 0; i < arr.length; i++)
	{
		if(result.indexOf(arr[i]) == -1)
			result.push(arr[i]);
	}
	return result;
}
var a=[1,3,5,7,5,3];
var b=uniqArray(a);
console.log(b);


//console.log(isFunction(fn));
//console.log(isArray(arr));
//getAttribute()的应用
var paras = document.getElementsByTagName("p");
console.log(paras);