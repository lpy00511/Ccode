var a = require("./fun");
var tree = new a();
tree.insert(11);
tree.insert(7);
tree.insert(5);
tree.insert(3);
tree.insert(9);
tree.insert(8);
tree.insert(10);
tree.insert(13);
tree.insert(12);
tree.insert(14);
tree.insert(20);
tree.insert(18);
tree.insert(25);
tree.insert(6);
//树的遍历（1）中序遍历：也是中根遍历
tree.inOrderTraverse(printNode);
//树的遍历 （2）先序遍历
tree.preOrderTraverse(printNode);
//输的遍历（3）后序遍历
tree.postOrderTraverse(printNode);
var min_node = tree.min();
console.log(min_node);
var max_node = tree.max();
console.log(max_node);
console.log(tree.search(3));
