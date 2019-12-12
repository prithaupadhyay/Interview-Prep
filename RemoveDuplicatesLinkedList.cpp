/*
Remove Duplicates from Sorted List

Author: Pritha Upadhyay

Approach: 
It is given that the list is already sorted. So, the idea is to compare every element with the next element. If the two consecutive elements are same, then we remove one of the nodes.
*/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        while(temp!= NULL && temp->next!=NULL ){
            if(temp->val==temp->next->val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};