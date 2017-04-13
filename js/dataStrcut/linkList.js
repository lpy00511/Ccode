function Node(elment){
	this.elment = elment;
	this.next = null;
}
function Llist(){
	this.head = new Node("head");
	this.find = find;
	this.insert = insert;
	this.findPreious = findPreious;
	this.del = del;
	this.display = display;
}
function find(item){
	var currNode = this.head;
	while(currNode.elment != item){
		currNode = currNode.next;
	}
	return currNode;
}
function insert(newItem){
	var newNode = new Node(newItem);
	var currNode = this.head;
	newNode.next = currNode.next;
	currNode.next = newNode;
}
function findPreious(item){
	var currNode = this.head;
	while(currNode.next != null && currNode.next.elment != item){
		currNode = currNode.next;
	}
	return currNode;
}
function del(item){
	var preNode = this.findPreious(item);
	var currNode = preNode.next;
	

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
var citis = new Llist();
citis.insert("1");
citis.insert("2");
citis.insert("3");
citis.insert("4");
console.log(citis.display());
console.log(citis.find(1));
console.log(citis.findPreious(2));