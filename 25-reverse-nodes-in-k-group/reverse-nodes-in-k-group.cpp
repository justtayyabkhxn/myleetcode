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
    ListNode* findkthNode(ListNode* head, int k) {
        k -= 1;
        while (head != NULL && k > 0) {
            k--;
            head = head->next;
        }
        return head;
    }
    ListNode* reversedll(ListNode* head) {
        // Initialize'temp' at
        // head of linked list
        ListNode* temp = head;

        // Initialize pointer 'prev' to NULL,
        // representing the previous node
        ListNode* prev = NULL;

        // Traverse the list, continue till
        // 'temp' reaches the end (NULL)
        while (temp != NULL) {
            // Store the next node in
            // 'front' to preserve the reference
            ListNode* front = temp->next;

            // Reverse the direction of the
            // current node's 'next' pointer
            // to point to 'prev'
            temp->next = prev;

            // Move 'prev' to the current
            // node for the next iteration
            prev = temp;

            // Move 'temp' to the 'front' node
            // advancing the traversal
            temp = front;
        }

        // Return the new head of
        // the reversed linked list
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevlast = NULL;
        while (temp != NULL) {
            ListNode* kthNode = findkthNode(temp, k);
            if (kthNode == NULL) {
                if (prevlast)
                    prevlast->next = temp;
                break;
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            reversedll(temp);
            if (temp == head) {
                head = kthNode;
            } else {
                prevlast->next = kthNode;
            }
            prevlast = temp;
            temp = nextNode;
        }
        return head;
    }
};