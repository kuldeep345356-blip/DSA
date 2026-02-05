#include<iostream>
using namespace std;
class queue{

private:

    int *arr;
    int size;
    int qfront;
    int rear;

public:

    queue(int size){
        this->size=size;
        qfront = rear = 0;
        arr = new int (size);
    }

    void push(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }  

    int pop(){
        if(qfront==rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    queue *q = new queue(5);
    q->push(7);
    q->push(5);
    q->push(3);
    cout<<q->front()<<endl;
    cout<<q->pop()<<endl;
    cout<<q->isEmpty()<<endl;
    cout<<q->front()<<endl;
    cout<<q->pop()<<endl;
    cout<<q->pop()<<endl;
    cout<<q->isEmpty()<<endl;
    cout<<q->front()<<endl;
    
}