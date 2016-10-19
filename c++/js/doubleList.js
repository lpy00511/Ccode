function Node(element) {
	this.element= element;
	this.next = null;
	this.previous = null;
}
function LList(){
	this.head = new Node("head");
	this.insert = insert;
	this.display = display;
	this.find = find;
	this.remove = remove;
	this.findlast = findlast;
	this.dispReverse = dispReverse;
}
function find(item){
	var currNode = this.head;
	while(currNode.element != item){
		currNode = currNode.next;
	}
	return currNode;
}

function insert(newElement, item){
	var newNode = new Node(newElement);
	var current = this.find(item);
	newNode.next = current.next;
	newNode.previous = current;
	current.next = newNode;
}

function remove(item){
	var currNode = this.find(item);
	if(!(currNode.next == null)){
		currNode.previous.next = currNode.next;
		currNode.next.previous = currNode.previous;
		currNode.next = null;
		currNode.previous = null;
	}
}
function findlast(){
	var currNode = this.head;
	while(!(currNode.next == null)){
		currNode = currNode.next;
	}
	return currNode;
}
function dispReverse(){
	var currNode = this.head;
	currNode = this.findlast();
	var b = [];
	var i = 0;
	while(!(currNode.previous == null)){
		b[i++] = currNode.element;
		currNode = currNode.previous;
	}
	return b;
}
function display(){
	var currNode = this.head;
	var a = [];
	var i = 0;
	while(!(currNode.next == null))
	{
		a[i++] = currNode.next.element;
		currNode = currNode.next;
	}
	return a;
}
var cities = new LList();
cities.insert("Conway", "head");
cities.insert("Russellville", "Conway");
cities.insert("Alma", "Russellville");
cities.insert("Carlisle", "Alma");
console.log(cities.display());
cities.remove("Alma");
console.log(cities.display());
console.log(cities.dispReverse());