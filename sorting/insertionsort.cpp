#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int *arr,int size){
    for(int i=0;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        } 
        arr[j+1]=temp;
        print(arr,10);
    }
}
    int main(){
    int arr[]={4,10,35,12,3,4,5,33,46,20};
    insertionsort(arr,10);
    print(arr,10);
}