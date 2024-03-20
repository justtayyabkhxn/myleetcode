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
    ListNode* findkth(ListNode* head, int x) {
        int cnt=1;
        while(head!=NULL){
            if(cnt==x) return head;
            cnt++;
            head=head->next;
        }
        return head;
        }
        

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL) return head;
        if(k==0) return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
            len++;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
        ListNode* newlastNode=findkth(head,len-k);
        head=newlastNode->next;
        newlastNode->next=NULL;
        return head;
    }
};