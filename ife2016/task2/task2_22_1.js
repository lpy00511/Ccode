function addEventHandler(element, type, handler) {
    if (element.addEventListener) {
        element.addEventListener(type, handler, false);
    } else if (element.attachEvent) {
        element.attachEvent("on" + type, handler);
    } else {
        element["on" + type] = handler;
    }
}

function draw(node,newNode,flag) {
    var tree = document.getElementById("chart-wrap");


    var node_top = document.createElement("div");
    node_top.className = "circle";
    tree.appendChild(node_top);
    //顶层的两条线
    var left_line = document.createElement("div");
    left_line.className = "left-line";
    tree.appendChild(left_line);

    var right_line = document.createElement("div");
    right_line.className = "right-line";
    tree.appendChild(right_line);
    //第2层的两个节点
    var node1 = document.createElement("div");
    node1.className = "circle";
    tree.appendChild(node1);
    node1.style.left = Number(window.getComputedStyle(node_top, "").left.substring(0, 3)) - 150 + 'px';
    node1.style.top = Number(window.getComputedStyle(node_top, "").top.substring(0, 2)) + 100 + 'px';
    var node2 = document.createElement("div");
    node2.className = "circle";
    tree.appendChild(node2);
    node2.style.left = Number(window.getComputedStyle(node_top, "").left.substring(0, 3)) + 150 + 'px';
    node2.style.top = Number(window.getComputedStyle(node_top, "").top.substring(0, 2)) + 100 + 'px';
    //第2层的几条线
}

// function BinarySearchTree() {
//     var Node = function(key) {
//         this.key = key;
//         this.left = null;
//         this.right = null;
//         this.offsetL = 0;
//         this.offsetR = 0;
//         this.num=0;
//     };
//     var root = null;//可以改变的根节点
//     this.insert = function(key) {
//         var newNode = new Node(key);
//         if (root === null) {
//             root = newNode;
//             root.num = 1;
//             root.offsetL = 475;
//             root.offsetR = 50;
//         } else {
//             insertNode(root, newNode);
//         }
//     };
//     this.inOrderTraverse = function(callback){
//     	inOrderTraverseNode(root,callback);
//     };
// }
// var insertNode = function(node,newNode){
// 	var flag = 0;
// 	if(newNode.key < node.key){
// 		if(node.left == null){
// 			node.left = newNode;
// 			flag = 0;
// 			draw(node,newNode,flag); //在node的左子树画newNode
// 		}
// 		else{
// 			insertNode(node.left,newNode);
// 		}
// 	}else{
// 		if(node.right == null){
// 			node.right = newNode;
// 			flag = 1;
// 			draw(node,newNode,flag);
// 		}else{
// 			insertNode(node.right,newNode);
// 		}
// 	}
// }
// var treeNode = new BinarySearchTree();
// treeNode.insert(11);
// treeNode.insert(7);
// console.log(treeNode.root);