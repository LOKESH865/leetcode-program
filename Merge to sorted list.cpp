
#include<iostream>
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* temp = new ListNode();
        ListNode* ptr = temp;
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                ptr->next = l1;
                l1 = l1->next;
            }
            else
            {
                ptr->next = l2;
                l2 = l2->next;
            }
            ptr = ptr->next;
        }
        if(l1!=NULL){
            ptr->next = l1;
        }
        if(l2!=NULL){
            ptr->next = l2;
        }
        return temp->next;
    }
};

