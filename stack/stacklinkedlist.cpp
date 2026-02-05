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
};
class stack{
     public:
    node *top;
    stack(){
        this->top=NULL;
    }
    void push(int ele){
        node* temp = new node (ele);
        if(top==NULL){
            top = temp;
        }
        else{
            temp->next=top;
            top=temp;
        }
    }
    void pop(){
        node *temp = top;
        top=temp->next;
        delete temp;
    }
    void peek(){
        cout<<top->data<<endl;
    }
    void isEmpty(){
        if(top==NULL){
            cout<<"stack is empty "<<endl;
        }
        else{
            cout<<"stack is not empty"<<endl;
        }
    }
    void print (){
        node *curr = top;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }
};
int main(){
    stack *s = new stack();
    s->push(45);
    s->push(35);
    s->push(25);
    s->push(15);
    s->pop();
    s->peek();
    s->isEmpty();
    s->print();
}