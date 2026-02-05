#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertathead(node* &head,int d){
    node *temp= new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d){
    node *temp= new node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertatposition(node* &tail,node* &head,int position,int d){
    // insert in first node 
    if(position==1){
        insertathead(head,d);
        return ;
    }
    // insert in middle node
    node* temp = head;
    int count = 1;
    while(count<position-1){
        temp=temp->next;
        count++; 
    }
    // insert in last node
    if(temp->next==NULL){
        insertattail(tail,d);
        return ;
    }
    node* nodetoinsert= new node(d);
    nodetoinsert->next=temp->next;
    temp->next= nodetoinsert;
}
void deletenode(node* &tail,node* &head ,int position){
    // deleting first node starting node
    if(position==1){
        node* temp=head;
        head=head->next;
        // memory free 
        temp->next=NULL;
        delete temp;
    }
    // deleting any middle node and last node
    else{
        node* curr = head;
        node* per=NULL;
        int count=1;
        while(count<position){
            per=curr;
            curr= curr->next;
            count++;
        }
        per->next=curr->next;
        if(curr->next==NULL){
            tail=per;
        }
        // memory free 
        curr->next=NULL;
        delete curr;
    }
}
void deletebyvalue(node* &head,node* &tail,int value){
    node* curr =head;
    node* prev=NULL;
    if(head->data==value){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else{
        while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    if(curr->data==value){
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    }
}
void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *node1= new node(1);
    node *head=node1;
    node *tail=node1;
    // for(int i=0;i<5;i++){
    //     int a;
    //     cin>>a;
    //     insertattail(tail,a);
    // }
    insertattail(tail,2);
    insertattail(tail,4);
    insertattail(tail,5);
    insertatposition(tail,head,3,3);
    insertatposition(tail,head,1,0);
    insertatposition(tail,head,7,6);
    deletenode(tail,head,3);
    deletenode(tail,head,6);
    deletenode(tail,head,1);
    // deletebyvalue(head,tail,4);
    deletebyvalue(head,tail,1);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
}