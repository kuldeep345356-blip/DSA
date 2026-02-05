#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int *arr,int size){
    if(size==0 || size==1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);
}
int main(){
    int arr[]={10,22,40,15,3,2,5,1,6,9};
    bubblesort(arr,10);
    print(arr,10);
}