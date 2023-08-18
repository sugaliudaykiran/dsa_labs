/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    Node *cur = new Node();
    cur = head;  //  TC -> O(N)..   SC -> O(1)..
    while (cur-> next != NULL){
        cur = cur -> next;
    }
    if (cur->prev != NULL) {
        cur->prev->next = NULL;
    }
    return head;
}
