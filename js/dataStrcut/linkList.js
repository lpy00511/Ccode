function Node(elment){
	this.elment = elment;
	this.next = null;
	console.log(this);
}
function Llist(){
	this.head = new Node("head");
	this.find = find;
	this.insert = insert;
	this.findPrevious = findPrevious;
	this.del = del;
	this.display = display;
}
function insert(newItem){
	var newNode = new Node(newItem);
	var currNode = this.head;
	newNode.next = currNode.next;
	currNode.next = newNode;
}
function find(item){
	var currNode = this.head;
	while(currNode.next != null && currNode.elment != item){
		currNode = currNode.next;
	}
	return currNode;
}
function findPrevious(item){
	var currNode =  this.head;
	while(currNode.next != null && currNode.next.elment != item){
		currNode = currNode.next;
	}
	return currNode;
}
function del(item){
	var preNode = this.findPrevious(item);
	if(preNode.next != null){
		preNode.next = preNode.next.next;
	}
}
function display(){
	var currNode = this.head;
	var list = [];
	var i = 0;
	while(currNode.next != null){
		list[i++] = currNode.next.elment;
		currNode = currNode.next;
	}
	return list;
}
var a = new Llist();
a.insert("1");
a.insert("2");
a.insert("3");
a.insert("4");
console.log(a.find("1").elment);
console.log(a.findPrevious("2").elment);
console.log(a.display());
a.del("2");
console.log(a.display());
function log(msg){
	console.log.apply(this, arguments);
}
log(1,2,3);




