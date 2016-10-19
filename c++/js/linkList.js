function Node(elment){
	this.elment = elment;
	this.next = null;
} 
function LList(){
	this.head = new Node("head");
	this.find = find;
	this.insert = insert;
	this.remove = remove;
	this.findPrevious = findPrevious;
	this.display = display;
}
function find(item){
	var currNode = this.head;
	while(currNode.elment != item){
		currNode = currNode.next;
	}
	return currNode;
}
function insert(newElment, item){
	var newNode = new Node(newElment);
	var current = this.find(item);
	newNode.next = current.next;
	current.next = newNode;
}
function findPrevious(item){
	var currNode = this.head;
	while(!(currNode.next == null)&& (currNode.next.elment != item)){
		currNode = currNode.next;
	}
	return currNode ;
}
function remove(item){
	var preNode = this.findPrevious(item);
	if(preNode.next != null){
		preNode.next = preNode.next.next;
	}
}
function display(){ 
	var currNode = this.head;
	var a=[];
	var i = 0;
	while(currNode.next != null){
		a[i++] = currNode.next.elment;
		currNode = currNode.next;
	}
	return a;
}
var cities = new LList();
cities.insert("Conway","head");
cities.insert("Russellville", "Conway");
cities.insert("Alma", "Russellville");
cities.insert("Carlisle", "Alma");
console.log(cities.display());
cities.remove("Alma");
console.log(cities.display());