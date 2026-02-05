#include<iostream>
using namespace std;

class DoublyEndedQueue{
    
private:

    int *arr;
    int size;
    int front;
    int rear;

public:
     
    DoublyEndedQueue(int size){
        this->size = size;
        arr = new int (size);
        front = rear = -1;
    }

    bool push_front(int data){
        if(rear==(front-1) || (rear == (size-1) && front ==0 )){
            return false;
        }
        else{
            if(front==-1){
                front = rear = 0;
            }
            else if(front == 0 && rear!=size-1){
                front = size -1;
            }
            else{
                front--;
            }
            arr[front]=data;
            return true;
        }
    }

    bool push_rear(int data){
       if(rear==(front-1) || (rear==(size-1) && front==0)){
            return false;
        }
        else{
            if(front==-1){
                front = rear = 0;
            }
            else if(rear==size-1 && front!=0){
                rear = 0;
            }
            else{
                rear++;
            }
            arr[rear] = data;
            return true; 
        } 
    }

    int pop_front(){
        if(front==-1){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front]=-1;
            if(front==rear){
                front = rear = -1;
            }
            else if(front==(size-1)){
                front = 0;
            }
            else{
                front++;
            }
            return ans;
        }
    }

    int pop_rear(){
        if(rear == -1){
            return -1;
        }
        else{
            int ans = arr[rear];
            arr[rear]= -1;
            if(front==rear){
                front = rear = -1;
            }
            else if(rear==0){
                rear = size -1;
            }
            else{
                rear--;
            }
            return ans;
        }
    }

    int getFront() {
        if(front==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int getRear() {
        if(rear==-1){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if((rear==(front-1)) || (rear==size-1 && front == 0) ){
            return true;
        }
        else{
            return false;
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}; 

int main(){

    DoublyEndedQueue *q = new DoublyEndedQueue(3);
    cout<<q->push_front(3)<<endl;
    cout<<q->push_rear(5)<<endl;
    cout<<q->push_front(7)<<endl;
    q->print();
    cout<<q->getFront()<<endl;
    cout<<q->getRear()<<endl;
    cout<<q->isFull()<<endl;
    cout<<q->pop_rear()<<endl;
    cout<<q->pop_front()<<endl;
    cout<<q->pop_front()<<endl;
    cout<<q->pop_rear()<<endl;
    cout<<q->pop_front()<<endl;
    cout<<q->isEmpty()<<endl;
    q->print();

}