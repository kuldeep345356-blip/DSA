#include<iostream>
using namespace std;

class kQueue{
    private:

    int k;
    int n;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

    public:

    kQueue(int size,int noofqueues){
        arr = new int (size);
        this->n=size;
        this->k=noofqueues;
        next= new int (size);
        front = new int(k);
        rear = new int (k);
        freespot = 0;
        for(int i=0;i<k;i++){
            front[i]-1;
            rear[i]=-1;
        }
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }

    void enqueue(int data,int qn){
        //overflow condition
        if(freespot==-1){
            cout<<"no empty space is present"<<endl;
            return ;
        }
        //find freespot
        int index = freespot;
        //update freespot
        freespot = next[index];
        //check wheather the first element
        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            //link element of queue to each other 
            next[rear[qn-1]]=index;
        }
        //update next
        next[index]=-1;
        //update rear
        rear[qn-1]=index;
        //insert element
        arr[index]=data;
    }

    int  dequeue(int qn){
        //underflow condition
        if(front[qn-1]==-1){
            // cout<<"Queue underflow"<<endl;
            return -1;
        }
        //find front index of queue to pop
        int index = front[qn-1];
        //update front of queue
        front[qn-1]=next[index];
        //link freespot
        next[index]=freespot;
        //update freespot
        freespot=index;
        //return element
        return arr[index];
    }

    // void print(){
    //     for(int i=0;i<9;i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }

};
int main(){
    kQueue* q = new kQueue(9,3);
    q->enqueue(10,1);
    q->enqueue(15,1);
    q->enqueue(20,2);
    q->enqueue(25,1);
    // q->print();
    cout<<q->dequeue(1)<<endl;
    cout<<q->dequeue(2)<<endl;
    // q->print();
} 