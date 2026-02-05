#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* pre;
    node* next;
    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
    // destructor
    ~node(){
        if(this->next!=NULL){
            delete next,pre;
            this->next=this->pre=NULL;
        }
    }
};
void insertathead (node* &head,node* &tail,int d){
    //for first node
    if(head==NULL){
        node* temp = new node (d);
        head = temp;
        tail =temp;
    }
    // for remaining nodes
    else{
        node* temp = new node(d);
        temp->next=head;
        head->pre=temp;
        head=temp;
    }
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
}
void insertattail (node* &head,node* &tail,int d){
    // for first node
    if(tail==NULL){
        node* temp = new node (d);
        tail = temp;
        head = temp;
    }
    // for remaining nodes
    else{
        node* temp = new node(d);
        temp->pre=tail;
        tail->next=temp;
        tail=temp;
    }
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
}
void insertatposition(node* &head,node* &tail,int position,int d){
    // for insert at first position
    if(position==1){
        insertathead(head,tail,d);
        return ;
    }
    // for insert at middle and last position
    else{
        node* temp = head;
        int count = 1;
        while(count<position-1){
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){
            insertattail(head,tail,d);
            return;
        }
        node* nodetoinsert = new node(d);
        nodetoinsert->pre=temp;
        nodetoinsert->next=temp->next;
        temp->next->pre=nodetoinsert;
        temp->next=nodetoinsert;
        // cout<<head->data<<endl;
        // cout<<tail->data<<endl;
    }
}
void deletenode(node* &head,node* &tail,int position){
    // deleting first node
    if(position==1){
        node* temp = head;
        head=head->next;
        temp->next->pre=NULL;
        temp->next=NULL;
        delete temp;
    }
    // deleting middle and last node
    else{
        node* curr = head;
        int count =1;
        while(count<position){
            curr=curr->next;
            count++;
        }
        curr->pre->next=curr->next;
        curr->next->pre=curr->pre;
        if(curr->next==NULL){
            tail=curr->pre;
        }
        curr->pre=curr->next=NULL;
        delete curr;
    }
}
int getlength(node* &head){
    node* temp= head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
void print (node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverse(node* prev,node* curr){
    if(curr==NULL){
      return prev;  
    }
    node* chotahead = reverse(curr,curr->next);
    swap(curr->pre,curr->next);
    return chotahead;
}

int main(){
    node* head =NULL;
    node* tail =NULL;
    insertathead(head,tail,3);
    insertathead(head,tail,2);
    insertathead(head,tail,1);
    insertattail(head,tail,4);
    insertattail(head,tail,5);
    insertatposition(head,tail,4,6);
    insertatposition(head,tail,5,7);
    print(head) ;
    // cout<<endl;
    // deletenode(head,tail,4);
    // print(head);
    // cout<<endl;
    // deletenode(head,tail,4);
    // print(head);
    // cout<<endl;
    // insertattail(tail,6);
    // insertatposition(head,tail,4,6);
    // print(head);
    // cout<<endl<<getlength(head)<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    head = reverse(NULL,head);
    print(head);
    cout<<head->data<<endl;
}