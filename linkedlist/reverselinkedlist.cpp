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

void reverse(int rigth,int left,node* curr,node* prev){
    if(left>=rigth){
        return;
    }
    node *forward=curr->next;
    reverse(rigth,left++,forward,curr);
    cout<<curr->data<<endl;
    forward->next=curr;
}

node* reverse1(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* chotahead=reverse1(head->next);
    head->next->next=head;
     head->next=NULL;
    return chotahead;
}

node* midelement(node* head){
    int count =0;
    node* temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int mid = (count/2)+1;
    count=1;
    node* midpointer = head;
    while(count<mid){
        count++;
        midpointer=midpointer->next;
    }
    return midpointer;
}

node* reverseelement(node* head,int left,int rigth){
    node* curr = head;
    node* temp = NULL;
    int count=1;
    while(count<left){
        count++;
        temp = curr;
        curr = curr->next;
    }
    cout<<temp->data<<endl;
    node* forward = curr;
    node* back = back;
    while(count<=rigth){
        count++;
        back = forward;
        forward = forward->next;
    }
    cout<<forward->data<<endl;
    cout<<back->data<<endl;
    node* prev = temp;
    cout<<curr->data<<endl;
    cout<<prev->data<<endl;
    reverse(rigth+1,left,curr,prev);
    curr->next=forward;
    temp->next=back;
    return head;
}

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
    insertattail(tail,2);
    insertattail(tail,3);
    insertattail(tail,4);
    insertattail(tail,5);
    insertattail(tail,6);
    // deletebyvalue(head,tail,1);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    // node* curr = head;b 
    // node* prev = NULL;
    // reverse(head,tail,curr,prev);
    // print(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    // head = reverse1(head);
    // print(head);
    // cout<<head->data<<endl;
    head = reverse2(head,tail);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    node* mid = midelement(head);
    cout<<mid->data<<endl;
    head = reverseelement(head,2,4);
    print(head);
}
