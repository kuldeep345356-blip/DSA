#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(int data,node* &head,node* &tail){
    if(head==NULL){
        node* temp = new node(data);
        head=temp;
        tail=temp;
    }
    else{
    node* temp = new node(data);
    temp->next=head;
    head=temp;
    }
}

void insertattail(int data,node* &tail,node* &head){
    if(tail==NULL){
        node* temp = new node(data);
        tail=temp;
        head=temp;
    }
    else{
        node* temp = new node(data);
        tail->next=temp;
        tail=temp;
    }
}

void insertatposition(node* &tail,node* &head,int position,int d){
    // insert in first node 
    if(position==1){
        insertathead(d,head,tail);
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
        insertattail(d,tail,head);
        return ;
    }
    node* nodetoinsert= new node(d);
    nodetoinsert->next=temp->next;
    temp->next= nodetoinsert;
}

void deletenode(node* &head,node* &tail,int position){
    if(position ==1){
        node* temp = head;
        head = head->next;
        delete temp;
    }
    node* curr = head;
    node* prev = NULL;
    int count=1;
    while(count<position){
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
    if(curr->next==NULL){
        tail=prev;
        delete curr;
    }
    delete curr;
}

void deletebyvalue(node* &head,node* &tail,int value){
    if(head->data==value){
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* curr = head;
    node* prev = NULL;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(curr->next==NULL){
        tail=prev;
    }
    delete curr;
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverseinkgroup(node* head,int k){
    if(head==NULL){  
        return NULL;
    }
    node* next = NULL;
    node* curr = head; 
    node* prev = NULL;
    int count = 0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr = next; 
        count++;
    }
    if (next!=NULL){
        head->next = reverseinkgroup(next,k);
    }
    return prev;  
}

node* sortList(node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        node* prev = head;
        int length = 0;
        while(prev!=NULL){
            length++;
            prev=prev->next;
        }
        prev=head;
        for(int i=0;i<length;i++){
            node* curr = head->next;
            prev = head;
            while(curr!=NULL){
                if(prev->data>curr->data){
                    swap(prev->data,curr->data);
                }
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }

int main(){
    node* tail = NULL;
    node* head = NULL;
    insertathead(1,head,tail);
    insertattail(2,tail,head);
    insertattail(4,tail,head);
    insertattail(5,tail,head);
    insertatposition(tail,head,3,3);
    deletenode(head,tail,5);
    deletebyvalue(head,tail,4);
    insertattail(4,tail,head);
    insertattail(5,tail,head);
    insertattail(6,tail,head);
    insertattail(7,tail,head);
    insertattail(8,tail,head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    head=reverseinkgroup(head,3);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    head=sortList(head);
    cout<<head->data<<endl;
    print(head);
}