#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int *arr,int size){
    if(size==0 || size==1){
        return ;
    }
    int max=0;
    for(int i=1;i<size;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    swap(arr[max],arr[size-1]);
    selectionsort(arr,size-1);
}
int main(){
    int arr[]={2,5,1,6,9,5,67,45,20,12};
    selectionsort(arr,10);
    print(arr,10);
}