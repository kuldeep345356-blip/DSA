#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        print(arr,10);
    }
}
int main(){
    int arr[]={45,34,68,6,8,19,40,33,24,3};
    selectionsort(arr,10);
    print(arr,10);
}
