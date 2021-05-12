class Solution
{
    public: 
   
void Solve(Node* root, Node* &head, Node* &prev, int &f){
    if(!root)
        return;
    Solve(root->left, head, prev,f);
    if(f==0){
        f=1;
        head=root;
        prev=root;
    }
    else{
        prev->right=root;
        prev->right->left=prev;
        prev=prev->right;
    }
Solve(root->right,head,prev,f);
} 
    Node * bToDLL(Node *root)
    {
        Node* head=NULL;
        Node* prev=NULL;
        int f=0;
        Solve(root,head,prev,f);
        return head;
} 
};
