/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

int searchInLinkedList(Node<int> *head, int k) {
    if (!head){
        return 0;   //  Using Recursive call
    }
    if(head->data==k){      //  TC -> O(N)..
        return 1;           //  SC -> O(N).
    }else{
        return searchInLinkedList(head->next, k);
    }
}

// ======================================
int searchInLinkedList(Node<int> *head, int k) {
    if (head==NULL){    //  Using Iterative call
        return 0;
    }

    while (head){   //  TC -> O(N)..    SC  -> O(1).
        if (head->data==k){
            return 1;
        }head = head -> next;
    }return 0;
}