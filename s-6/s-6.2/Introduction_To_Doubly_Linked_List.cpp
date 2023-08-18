/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    int n=arr.size();
    if (n==0){
        return NULL;
    }
    Node *root = new Node();
    root -> data = arr[0];
    Node *prevNode = new Node();
    prevNode = root;  // TC -> O(N)..   SC -> O(1)..

    for (int i=1;i<n;i++){
        Node *curr = new Node();
        curr -> data = arr[i];

        curr -> prev = prevNode;
        prevNode -> next = curr;
        prevNode = prevNode -> next;
    }return root;
}
