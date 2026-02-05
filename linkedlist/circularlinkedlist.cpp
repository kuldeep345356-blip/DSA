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
    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertnode(node* &tail,int ele,int d){
    if(tail==NULL){
        node* temp= new node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        node* curr = tail;
        while(curr->data!=ele){
            curr=curr->next;
        }
        node* temp= new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deletenode(node* &tail,int value){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return ;
    }
    else{
        node* curr =tail;
        node* prev =NULL;
        while(curr->data!=value){
            prev = curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(prev==curr){
            tail=NULL;
        }
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int  getlength(node* tail){
    node* temp = tail;
    int count=0;
    do{
        count++;
        tail=tail->next;
    }while(tail!=temp);
    return count;
}
// void clearlist(node* &tail){
//     for(int i=1;i<getlength(tail);i++){
//         deletenode(tail,tail->data);
//     }
// }
void print(node* tail){
    node* temp = tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
    node* tail= NULL;
    insertnode(tail,0,3);
    insertnode(tail,3,5);
    insertnode(tail,5,7);
    insertnode(tail,5,6);
    deletenode(tail,6);
    deletenode(tail,5);
    // int a;
    // for(int i=1;i<8;i++){
    //     int b=a;
    //     cin>>a;
    //     insertnode(tail,b,a);
    // }
    print(tail);
}