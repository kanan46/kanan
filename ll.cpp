class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head== NULL)
        return NULL;
        struct Node *p= NULL;
        struct Node *q=head;
        struct Node *t= q->next;
        while(q!=NULL)
        {
            t=q->next;
            q->next=p;
            p=q;
            q=t;
        }
        return p;
    }
};
    
