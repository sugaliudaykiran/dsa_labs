/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
{
    Node *cur = new Node();
    if (head == NULL){  // Using Iterative Method..
        return 0;
    }cur = head; // TC -> O(N).. where N is length of the linked list
    int cnt=1;  //  SC -> O(1).

    while (cur->next != NULL){
        cnt++;
        cur = cur -> next;
    }return cnt;
}

// =====================================
// Using Recursion Method..
int length(Node *cur, int cnt){
    if (!cur){
        return cnt;     //  TC -> O(N)..    SC -> O(N).
    }
    cnt = length(cur->next, ++cnt);
}

int length(Node *head)
{
    if (head == NULL){
        return 0;
    }

    int cnt=0;
    Node *cur = new Node();
    cur = head;
    return length(cur, cnt);
}