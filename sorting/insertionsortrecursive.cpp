#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int *arr,int size){
    if(size==0||size==1){
        return ;
    }
    insertionsort(arr,size-1);
    int temp = arr[size-1];
    int i=size-2;
    while(i>=0){
        if(arr[i]>temp){
            arr[i+1]=arr[i];
        }
        else{
            break;
        }
        i--;
    }
    arr[i+1]=temp;
}
int main(){
    int arr[]={50,2,46,3,30,9,5,11,55,1};
    insertionsort(arr,10);
    print(arr,10);
}