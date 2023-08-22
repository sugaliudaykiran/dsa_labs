/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    Node *cur = new Node();  // TC -> O(N).. where N is length of linkedlist.
    Node *temp = new Node();   //   SC -> O(1)..
    
    cur = head;

    while (cur){
        temp = cur -> prev;
        cur -> prev = cur -> next;
        cur -> next = temp;
        
        cur = cur -> prev;
    }
    if (temp){
        head = temp -> prev;
    }return head;

}

// ================================

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/
Node* reverse2Nodes(Node* &head, Node* cur){
    if (!cur){
        return cur; // TC -> O(N)..     SC -> O(N)..
    }   // N is length of DD list in stack.
    Node *temp = cur -> prev; 
    cur -> prev = cur -> next;
    cur -> next = temp;
    
    if (cur->prev == NULL){
        return cur;
    }
    reverse2Nodes(head, cur->prev);
}

Node* reverseDLL(Node* head)
{   
    if (!head || !(head -> next)){
        return head;
    }
    
    return reverse2Nodes(head, head);
}

