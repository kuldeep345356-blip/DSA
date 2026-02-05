#include<iostream>
using namespace std;
class NStack{
    int *top;
    int *next;
    int freespot;
    int *arr;
    public:
    NStack(int n,int s){
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        for(int i=0;i<n;i++){
            arr[i]=-1;
        }
        for(int i=0;i<s;i++){
            arr[i]=i+1;
        }
        next[s-1]=-1;
        freespot = 0;
    }
    bool push(int x,int m){
        if(freespot==-1){
           return false;
        }
        //find index
        int index = freespot;

        //update freespot
        freespot=next[index];

        //insert element into array
        arr[index]=x;

        //update next
        next[index]=top[m-1];

        //update top
        top[m-1]=index; 
        
        return true; 
    }
    int pop(int m){
        if(top[m-1]==-1){
            return -1;
        }
        int index = top[m-1];
        top[m-1]=next[index];
        next[index]=freespot;
        freespot = index;
        return arr[index];
    }
};
int main(){
    NStack *s= new NStack(3,6);
    cout<<s->push(10,1)<<endl;
    cout<<s->push(20,2)<<endl;
    cout<<s->push(30,1)<<endl;
    cout<<s->push(40,3)<<endl;
    cout<<s->push(50,2)<<endl;
    cout<<s->pop(1)<<endl;
    cout<<s->pop(1)<<endl;
}