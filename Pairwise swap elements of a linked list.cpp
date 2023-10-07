class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        Node* dummy = new Node(-1);
        Node* prev = dummy;
        Node* curr = head;
        dummy->next = head;
        while(curr!=NULL && curr->next!=NULL){
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = curr;
            curr = curr->next;
            prev = prev->next->next;
        }
        return dummy->next;
    }
};