#include<iostream>
#include<list>
using namespace std;
class stack{
    int *arr;
    int top;
    int size;
    public:
    stack(int size){
        this->size=size;
        arr = new int [size];
        top=-1;
    }
    void push(int ele){
        if(size-top>1){
            top++;
            arr[top]=ele;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    int peek(){
        if(top>=0){
             return arr[top];
        }
        else{
            return -1;
        }
    }
    void isEmpty(){
        if(top>=0){
            cout<<"stack is not empty"<<endl;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    void print (){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
void deletemid(stack* &s , int count , int size){
    if(count==size/2){
        s->pop();
        return ;
    }
    int num = s->peek();
    s->pop();
    deletemid(s,count++,size);
    s->push(num);
}
int main(){
    stack *s = new stack(5);
    s->push(4);
    // s->push(3);
    // s->pop();
    s->push(2);
    s->push(1);
    s->push(3);
    s->push(5);
    // s->isEmpty(); 
    // s->peek();
    s->print();
    deletemid(s,0,5);
    s->print();
}
