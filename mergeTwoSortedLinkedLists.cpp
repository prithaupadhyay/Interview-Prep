/*
Merge two sorted Linked Lists
Author: Pritha Upadhyay

Approach: 
Idea is to create a new list and add elements to this list based on the comparison between the elements of the two sorted lists. Here the benefit is that the two given lists are already sorted and hence we can move the traversal starting from the beginning.

Example:
Input:
    l1: 2->5->7
    l2: 1->9->15

Output:
    res: 1->2->5->7->9->15
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res=NULL;
        
        if(l1==NULL){
            return l2;
        }
        else if(l2==NULL){
            return l1;
        }
        
        if(l1->val <= l2->val){
            res=l1;
            res->next = mergeTwoLists(l1->next, l2);
        }
        else{
            res=l2;
            res->next=mergeTwoLists(l1,l2->next);
        }
       
        return res;
    }
};