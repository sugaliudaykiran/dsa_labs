/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */


Node* constructLL(vector<int>& arr) {
    Node *head=new Node();  // TC -> O(N).. where N is the length of array.
    int n=arr.size();  //   SC -> O(1)..
    if (n==0){
        return head;
    }
    head -> data = arr[0];
    Node *curr=new Node();
    curr=head;
    for (int i=1;i<n;i++){
        Node *newNode=new Node(arr[i]);
        // newNode -> data = arr[i];
        curr->next = newNode;
        curr = newNode;
    }return head;
}