#include<iostream>
using namespace std;

class CircularQueue{
private:

    int front;
    int *arr;
    int rear;
    int size;
    
public:

    CircularQueue(int size){
        this->size=size;
        arr = new int(size);
        front = rear = -1;
    }

    bool EnQuene(int data){
        if(rear==(front-1)%(size-1) || (rear==(size-1) && front==0)){
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

    int DeQueue(){
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

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    CircularQueue *q = new CircularQueue(3);
    cout<<q->EnQuene(3)<<endl;
    cout<<q->EnQuene(5)<<endl;
    cout<<q->EnQuene(7)<<endl;
    cout<<q->EnQuene(9)<<endl;
    q->print();
    cout<<q->DeQueue()<<endl;
    cout<<q->EnQuene(9)<<endl;
    q->print();
    cout<<q->DeQueue()<<endl;
    cout<<q->DeQueue()<<endl;
    cout<<q->DeQueue()<<endl;
    cout<<q->DeQueue()<<endl;
    q->print();
}