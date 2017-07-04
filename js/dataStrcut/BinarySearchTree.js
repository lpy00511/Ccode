/*
* 二叉搜索树，特点是左子树存储比父节点小的值，右子树存储比父节点大或者等于的值。
*/
function BinarySearchTree(){
	var Node = function(key){
		this.key = key;
		this.left = null;
		this.right = null;
	};
	var root = null;
	this.insert = function(key){
		var newNode = new Node(key);
		if(root === null){
			root = newNode;
		}else{
			insertNode(root,newNode);
		}
	};
	this.inOrderTraverse = function(callback){
		inOrderTraverseNode(root,callback);
	};
	this.preOrderTraverse = function(callback){
		preOrderTraverseNode(root,callback);
	};
	this.postOrderTraverse = function(callback){
		postOrderTraverseNode(root,callback);
	};
	this.min = function(){
		return minNode(root); //查找树的最小值
	};
	this.max = function(){
		return maxNode(root);  //查找树的最大值
	};
	this.search = function(key){
		return searchNode(root,key); //查找树的给定值
	};
	this.searchL = function(){
		return searchNodeL(root);
	};
	this.searchR = function(){
		return searchNodeR(root);
	};
	this.remove = function(node){
		return removeNode(node);
	};
}
/*
*我们实现的方法包括：
insert(key);
search(key);
inOrderTraverse: 中序遍历所有节点
preOrderTraverse:先序遍历所有节点
postOrderTraverse:后序遍历所有节点
min:返回树中最小的值/键
max:返回树中最大的值/键
remove(key):从树中移除某个键
*/
var insertNode = function(node,newNode){
	if(newNode.key < node.key){
		if(!node.left){
			node.left = newNode;
		}else{
			insertNode(node.left,newNode);
		}
	}else{
		if(!node.right){
			node.right = newNode;
		}else{
			insertNode(node.right,newNode);
		}
	}
};
var inOrderTraverseNode = function(node, callback){
	if(node != null){
		inOrderTraverseNode(node.left,callback);
		callback(node.key);
		inOrderTraverseNode(node.right,callback);
	}
};
var preOrderTraverseNode = function(node,callback){
	if(node != null){
		callback(node.key);
		preOrderTraverseNode(node.left,callback);
		preOrderTraverseNode(node.right,callback);
	}
};
var postOrderTraverseNode = function(node,callback){
	if(node != null){
		postOrderTraverseNode(node.left,callback);
		postOrderTraverseNode(node.right,callback);
		callback(node.key);
	}
};
var minNode = function(node){
	if(node){
		while(node && node.left != null){
			node = node.left;
		}
		return node;
	}
	return null;
}
function maxNode(node){
	if(node){
		while(node && node.right != null){
			node = node.right;
		}
		return node;
	}
	return null;
}
function searchNode(node,key){
	if(node == null){
		return false;
	}
	if(key < node.key){
		return searchNode(node.left,key);
	}else if(key > node.key){
		return searchNode(node.right,key);
	}else{
		return true;
	}
}
function searchNodeL(node){
	if(node == null){
		return false;
	}
	if(node.left == null){
		return false;
	}else {
		return true;
	}
} 
function searchNodeR(node){
	if(node == null){
		return false;
	}
	if(node.right == null){
		return false;
	}else {
		return true;
	}
}
function removeNode(node){
	if(!node.left && !node.right){
		node = null;
		return node;
	}
	else if(!node.left){
		node = node.right;
		return node;
	} 
	else if(!node.right){
		node = node.left;
		return node;
	}
	else{
		var aux = min(node.right);
		node.key = aux.key;
		node.right = removeNode(aux);
		return node;
	}
}
module.exports = BinarySearchTree;
