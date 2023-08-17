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
    void deleteNode(ListNode* node) {  // Navie sol: using two pointers
        ListNode *cur = new ListNode();
        ListNode *prev = new ListNode(); // TC -> O(N)..    SC -> O(1).
        cur=node;
        while (cur->next!=NULL){
            cur->val=cur->next->val;
            prev=cur;
            cur=cur->next;
        }prev->next=NULL;
        delete(cur);
    }
};

// ========================
// Efficient sol:- TC -> O(1)..    SC -> O(1).
class Solution {
public:
    void deleteNode(ListNode* node) {   //  In case of given node is pointing to tail..
        if (node -> next == NULL){    
            node = NULL;
        }
        node -> val = node -> next -> val;      //  Here we need to change cur node val to next node val.. and node's next to node's next's next..
        node -> next = node -> next -> next;
    }
};
