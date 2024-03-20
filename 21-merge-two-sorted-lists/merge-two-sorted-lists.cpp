/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* first = list1;
        ListNode* second = list2;
        ListNode* anslist=new ListNode(-1);
        ListNode* temp=anslist;
        while(first!=NULL && second!=NULL)
        {
            if(first->val<=second->val)
            {
                temp->next=first;
                temp=first;
                first=first->next;
            }
            else{
                temp->next=second;
                temp=second;
                second=second->next;
            }
        }
        while(first!=NULL)
        {
                temp->next=first;
                temp=first;
                first=first->next;
        }
        while(second!=NULL)
        {
                temp->next=second;
                temp=second;
                second=second->next;
        }
        return anslist->next;
    }
};