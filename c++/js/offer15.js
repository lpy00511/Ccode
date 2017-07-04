function ListNode(x){
	this.val = x;
	this.next = null;
}
var head = new ListNode(1);
function insertList(){
	for(var i = 2; i <= 5; i++){
		var newNode = new ListNode(i);
		newNode.next=head;
		head = newNode;
	}
}
insertList();
console.log(head);
function ReverseList(pHead)
{
    // write code here
    var pLeft=null,pNode=pHead,p=null;
    while(pNode != null){
    	var pRight = pNode.next;
    	if(pRight == null){
    		p = pNode;
    	}
    	pNode.next = pLeft;
    	pLeft = pNode;
    	pNode = pRight;
    }
    return p;
}
console.log(ReverseList(head));