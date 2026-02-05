#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort(int *arr,int s, int e){
    if(s==e){
        return;
    }
     for(int i=s;i<=e;i++){
        int min=i;
        for(int j=i+1;j<=e;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);    
    mergesort(arr,mid+1,e);
    sort(arr,s,e);
}
int main(){
    int arr[]={10,3,6,9,8,2,7,1,4,0};
    mergesort(arr,0,9);
    print(arr,10);
}