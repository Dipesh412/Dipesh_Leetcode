Recursive Approach : using DFS or Post Order Traversal

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node == NULL ){
            return 0;
        }
        else{
            int leftHeight = height(node->left);
            int rightHeight = height(node->right);
            
            if(leftHeight>rightHeight){
                return leftHeight+1;
            }
            else{
                return rightHeight+1;
            }
        }
    }
};