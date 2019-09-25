/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
ListNode*l3=new ListNode(0);
	ListNode*head1=l1;
	ListNode*head2=l2;
	if(l1==NULL||l2==NULL){
		if(l1==NULL&&l2==NULL){
			l3=NULL;
			return l3;
		}
		else if(l1==NULL&&l2!=NULL){
			l3=l2;
			return l3;
		}
		else if(l1!=NULL&&l2==NULL){
			l3=l1;
			return l3;
		}
	}
	if(head1->val<=head2->val){
		l3->val=head1->val;
		head1=head1->next;
	}
	else if(head1->val>head2->val){
		l3->val=head2->val;
		head2=head2->next;
	}
	ListNode*head3=l3;
	while(head1!=NULL||head2!=NULL){
		if(head1==NULL){
			while(head2!=NULL){
				ListNode*l4=new ListNode(head2->val);
				l3->next=l4;
				l3=l4;
				head2=head2->next;
			}
            return head3;
		}
		if(head2==NULL){
			while(head1!=NULL){
				ListNode*l4=new ListNode(head1->val);
				l3->next=l4;
				l3=l4;
				head1=head1->next;
			}
            return head3;
		}
		if(head1->val<head2->val){
			ListNode*l4=new ListNode(head1->val);
			l3->next=l4;
			l3=l4;
			head1=head1->next;
		}
		else if(head1->val>head2->val){
			ListNode*l5=new ListNode(head2->val);
			l3->next=l5;
			l3=l5;
			head2=head2->next;
		}
		else{
			ListNode*l6=new ListNode(head1->val);
			ListNode*l7=new ListNode(head2->val);
			l3->next=l6;
			l3=l6;
			l3->next=l7;
			l3=l7;
			head1=head1->next;
			head2=head2->next;
		}
	}
	return head3;                
    }
};