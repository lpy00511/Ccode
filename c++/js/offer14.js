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
//console.log(head);
function FindKthToTail(head, k)
{
    // write code here
    if(head == null || k == 0){
    	return null;
    }
    var a = head, b = head;
    for(var i = 0; i < k-1; i++){
    	if(a.next){
    		a = a.next;
    	}
    	else{
    		return null;
    	}
    }
    while(a.next){
    	a = a.next;
    	b = b.next;
    }
    return b;
}
console.log(FindKthToTail(head,5));
