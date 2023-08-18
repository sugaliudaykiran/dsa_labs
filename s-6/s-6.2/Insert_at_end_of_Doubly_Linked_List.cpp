/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node *insertAtTail(Node *head, int k) {
    Node *newNode = new Node();
    newNode -> value = k;
    if (head == NULL){  // TC -> O(N)..     SC -> O(1)..
        return newNode;
    }
    Node *cur = new Node();
    cur = head;

    while (cur->next !=NULL){
        cur=cur->next;
    }cur -> next = newNode;
    newNode-> prev = cur;
    return head;
}
