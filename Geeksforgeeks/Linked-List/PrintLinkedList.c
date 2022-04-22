void display(struct Node *head)
{
   //add code here
   struct Node *ptr = head;
   while(ptr!=NULL) {
       printf("%d ",ptr->data);
       ptr = ptr->next;
   }
}
