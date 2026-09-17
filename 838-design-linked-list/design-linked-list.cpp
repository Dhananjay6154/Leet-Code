class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = NULL;                
    }
    
    int get(int index) {
        Node* curr = head;
        if(head == NULL)
        {
            return -1;
        }
        for(int i=0;i<index;i++)
        {
            curr = curr->next;
            if(curr == NULL)
            {
                return -1;
            }
        }
        return curr->data;
    }
    
    void addAtHead(int val) {
        if(head == NULL)
        {
            Node* temp = new Node(val);
            head = temp;
        }
        else{
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
        }
    }
    
    void addAtTail(int val) {
        Node* tail = head;
        if(tail == NULL)
        {
            Node* temp = new Node(val);
            head = temp;
        }
        else{
            while(tail->next)
            {
                tail = tail->next;
            }
            Node* temp = new Node(val);
            tail->next = temp;
            temp->next = NULL;
        }
    }
    
    void addAtIndex(int index, int val) {

        if(index == 0)
        {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        while(--index)
        {
            temp = temp->next;
        }
        Node *temp2 = new Node(val);
        temp2->next = temp->next;
        temp->next = temp2;

    }
    
    void deleteAtIndex(int index) {
        if(head == NULL)
        {
            return;
        }
        if(index == 0)
        {
            Node* curr = head;
            head = head->next;
            delete curr;
            return;
        }

        Node* prev = head;
        Node* curr = head->next; 
        while(--index)
        {
            if(curr == NULL)
            {
                return;
            }
            prev = curr;
            curr = curr->next;
        }    
        if(curr == NULL)
        {
            return;
        }
        prev->next = curr->next;
        delete curr;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */