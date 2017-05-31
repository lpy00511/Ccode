function stack(){
	this.dataStore = [];
	this.top = 0;
}
stack.prototype = {
	push:function(element){
		this.dataStore[this.top ++] = element;
	},
	peek:function(){
		return this.dataStore[this.top-1];
	},
	pop:function () {
		return this.dataStore[this.top-1];
		this.top --;
	},
	clear:function(){
		this.top = -1;
	},
	length:function (argument) {
		return this.top;
	}
}
var lk = new stack();
lk.push(1);
lk.push(2);
lk.push(3);
lk.push(4);
console.log(lk.peek());
lk.clear();
console.log(lk.pop());




