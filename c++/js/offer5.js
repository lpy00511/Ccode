function Stack(){
	var arr = [];
	this.push = function(node){
		arr.push(node);
		return arr;
	};
	this.pop = function(){
		return arr.pop();
	};
	this.isEmpty = function(){
		return arr.length == 0;
	};
}
var stack1 = new Stack();
var stack2 = new Stack();

function push1(node)
{
    // write code here
    stack1.push(node);
}
function pop1()
{
    // write code here
    if(stack1.isEmpty() && stack2.isEmpty()){
    	throw new Error("empty queue");
    }
    if(stack2.isEmpty()){
    	while(!stack1.isEmpty()){
    		stack2.push(stack1.pop());
    	}
    }
    return stack2.pop();
}
push1(1);
push1(2);
push1(3);
console.log(pop1());
console.log(pop1());
console.log(pop1());



