class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    int diameter(Node* root)
    {
    // Your code here
    if (root== NULL)
       return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
 
    // get the diameter of left and right sub-trees
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
 
    // Return max of following three
    // 1) Diameter of left subtree
    // 2) Diameter of right subtree
    // 3) Height of left subtree + height of right subtree + 1
    return max(lheight + rheight + 1,
            max(ldiameter, rdiameter));
    
    }
    int height(struct Node* root){
        // code here 
        int x=0;
        int y=0;
        if(root==0)
            return 0;
        x=height(root->left);
        y=height(root->right);
        if(x>y)
            return x+1;
        else 
            return y+1;
    }

};
