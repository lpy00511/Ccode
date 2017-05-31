function fun(){
	var Node = function(key){
		this.key = key;
		this.left = null;
		this.right = null;
	};
	var root = null;
	this.insert = function(key){
		var newNode = new Node(key);
		console.log('hello');
	};
}
module.exports = fun;