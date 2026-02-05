node* reverse2(node* head,node* &tail){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* curr = head;
    node* prev = NULL;
    node* temp =NULL;
    while(curr!=NULL){
        temp = curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    tail=head;
    return prev;
}