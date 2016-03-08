#include <iostream>
#include <cstdio>
using namespace std;
struct ListNode {
      int val;
      struct ListNode *next;
  };
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* p,*q,*T;
    T->next = head;
    p = T;
    q = head;
    while(q != NULL)
    {
    	if(q->val == val)
    	{
    		p->next = q->next;
		}
		else{
			p = p->next;	
		}
		q = q->next;
	}
	return T->next;
}
