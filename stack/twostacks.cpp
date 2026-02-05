#include<iostream>
using namespace std;
class Twostacks{

    int *arr;
    int top1;
    int top2;
    int size;

    public:

    Twostacks(int size){
        this->size=size;
        arr = new int [size];
        top1=-1;
        top2=size;
    }

    void push1(int ele){
        if(top2-top1>1){
            top1++;
            arr[top1]=ele;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop1(){
        if(top1>=0){
            cout<<arr[top1]<<endl;
            top1--;
        }
        else{
            cout<<"stack underflow "<<endl;
        }
    }

    void peek1(){
        if(top1>=0){
            cout<<arr[top1]<<endl;
        }
        else{
            cout<<"stack is empty ";
        }
    } 

    void peek2(){
        if(top2<size){
            cout<<arr[top2]<<endl;
        }
        else{
            cout<<"stack is empty ";
        }
    }

    void push2(int ele){
        if(top2-top1>1){
            top2--;
            arr[top2]=ele; 
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop2(){
        if(top2<size){
            cout<<arr[top2]<<endl;
            top2++;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

};

int main(){

    Twostacks *s = new Twostacks (5);
    s->push1(1);
    s->push1(2);
    s->push1(3);
    s->push2(10);
    s->push2(9);
    s->push2(8);
    s->pop1();
    s->pop2();
    s->peek1();
    s->peek2();
    s->print();
    
}