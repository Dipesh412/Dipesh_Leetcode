class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        
       Node* node = new Node(data), *ptr = head, *prev = NULL;
        
        // for first node
        if(ptr->data > data){
            node->next = ptr;
            return node;
        }
        
        // for middle node
        while(ptr){
            if(ptr->data > data){
                prev->next = node;
                node->next = ptr;
                return head;
            }
            prev = ptr;
            ptr = ptr->next;
        }
        
        // for last node
        prev->next = node;
        node->next = ptr;
        return head;
        
    }
};
