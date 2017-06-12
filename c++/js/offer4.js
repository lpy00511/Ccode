function TreeNode(x){
	this.val = x;
	this.left = null;
	this.right = null;
}

function reConstructBinaryTree(pre,vin){
	if(pre.length == 0 || vin.length == 0)
	{
		return null;
	}
	var root = new TreeNode(pre[0]);
	for(var i = 0; i < pre.length; i++){
		if(vin[i] === pre[0]){
			root.left = reConstructBinaryTree(pre.slice(1, i+1),vin.slice(0, i));
			root.right = reConstructBinaryTree(pre.slice(i+1),vin.slice(i+1));
		}
	}
	return root;
}
var pre = [1,2,4,7,3,5,6,8],
vin = [4,7,2,1,5,3,6,8];
console.log(reConstructBinaryTree(pre,vin));
/***
**  根据前序遍历找到根节点
**  根节点左侧的节点都是左子树
**  右侧的节点都是右子树