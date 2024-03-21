/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // Node* insertcopy(Node* head)
    // {
      
    // }
    Node* copyRandomList(Node* head) {
          Node* temp = head;
        while (temp != NULL) {
            Node* nextel = temp->next;
            Node* nextnode = new Node(temp->val);
            nextnode->next = nextel;
            temp->next = nextnode;
            temp = nextel;
        }
        temp = head;
        while (temp != NULL) {
            Node* copynode = temp->next;
            if (temp->random) {
                copynode->random = temp->random->next;
            } else
                copynode->random = nullptr;
            temp = temp->next->next;
        }
        temp = head;
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        while (temp != NULL) {
            res->next = temp->next;
            temp->next = temp->next->next;
            res = res->next;
            temp = temp->next;
        }
        return dummyNode->next;
    }
};