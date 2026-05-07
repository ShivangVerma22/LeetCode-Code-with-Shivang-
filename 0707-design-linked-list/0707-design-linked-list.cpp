class MyLinkedList {
public:
    private:
    struct Node
    {
        int val;
        Node* next;
        Node(int x)
        {
            val=x;
            next=nullptr;
        }
    };
    Node* head;
    int size;
    public:
    MyLinkedList() {
        head=new Node(0);
        size=0;
        
    }
    
    int get(int index) {
        if(index>=size || index<0)
        {
            return -1;
        }
        Node *curr=head->next;
        for(int i =0;i<index;i++)
        {
            curr=curr->next;
        }
        return curr->val;
        
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
        
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>size )return;
        if(index<0) index = 0;

        Node *prev=head;
        for(int i =0;i<index;i++)
        {
            prev=prev->next;
        }
        Node *newNode=new Node(val);
        newNode->next=prev->next;
        prev->next=newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size || index<0)
        {
            return;
        }
        Node *curr=head;
        for(int i =0;i<index;i++)
        {
            curr=curr->next;
        }
        Node *temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        size--;

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