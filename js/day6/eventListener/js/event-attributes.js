// function checkUsername(){
// 	var elMsg = document.getElementById('feedback');
// 	var elUsername = document.getElementById('username');
// 	if(elUsername.value.length < 5){
// 		elMsg.textContent = 'Username must be 5 characters or more';
// 	}else {
// 		elMsg.textContent = '';
// 	}
// }
for(var i = 0; i < 3; i++){
	(function(){
		setTimeout(function(){
		console.log(i);
	},1000);
	})(i);
}
console.log(i);
//生成一个不重复的id
var getId = (function(){
	var a='abc',b =0;
	return function(){
		console.log(a+b++);
	}
})();
//清除闭包 
//函数运行之后，将函数内部变量清除掉
//隔一段时间清理一次
//怎么实现呢？ 将另一个
getId();
getId();
getId();
getId();
var ary = [1,23,4];
console.log(typeof ary);
console.log(ary instanceof Array);
console.log(ary.__proto__.constructor==Array);
console.log(ary.constructor == Array);
var ary = [1,23,4];
console.log(Object.prototype.toString.call(ary) == '[object Array]');
var numbers = [4, 2, 5, 1, 3];
numbers.sort(function(a, b) {
  return a - b;
});
console.log(numbers);// [1, 2, 3, 4, 5]
var items = [
  { name: 'Edward', value: 21 },
  { name: 'Sharpe', value: 37 },
  { name: 'And', value: 45 },
  { name: 'The', value: -12 },
  { name: 'Magnetic' },
  { name: 'Zeros', value: 37 }
];
for(var i = 0; i < items.length; i++){
	if(!items[i].value){
		items[i].value = 0;
	}
}
items.sort(function (a, b) {
  if (a.value > b.value) {
    return 1;
  }
  if (a.value < b.value) {
    return -1;
  }
  // a 必须等于 b
  return 0;
});
console.log(items);
