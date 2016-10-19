var  arr1=function(){
	var colors = ["red","blue","green"];
	colors[colors.length] = "black";
	colors[colors.length] = "brown";
    if(Array.isArray(colors)){    //支持此方法的浏览器有IE9+,Firefox5+,Opera10.5+,chrome.
		//return colors.toLocaleString();
		//return colors.toString();
	    //return colors.valueOf();  //返回的依然是数组
	    //return colors.join("||");   //默认是以“，”分隔的字符串返回数组项。
	}
	var array = new Array();
	var count = array.push("red","green"); //count中保存的是数组中元素的个数
	count = array.push("black");
	//var item = array.pop();   //以上是利用数组来模拟栈
	//var item1 = array.shift();   //从数组首部取得元素
 	//return item+" "+item1;
 	array.unshift("yellow","pink");     //向数组首部添加元素
 	array.pop();
 	return array;
}
console.log(arr1());
