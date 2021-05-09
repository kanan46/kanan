class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        int x=0;
        int y=0;
        if(node==0)
            return 0;
        x=height(node->left);
        y=height(node->right);
        if(x>y)
            return x+1;
        else 
            return y+1;
    }
};
