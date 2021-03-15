int getMiddle(Node *head)
{
   int len=0;
   struct Node * p=head;
   if(p==NULL){return 0;}
   while(p!=NULL){
       len++;
       p=p->next;
   }
   len=len/2;
   p=head;
   while(len--)
   {
       p=p->next;
   }
   return p->data;
}
