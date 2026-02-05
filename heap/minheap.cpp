#include<iostream>
using namespace std;
void heapify(int arr[],int size,int i){
    int smallest = i;
    int left = (2*i)+1;
    int right = (2*i)+2;

    if(left<size && arr[smallest]>arr[left]){
        smallest = left;
    }

    if(right<size && arr[smallest]>arr[right]){
        smallest = right;
    }
    
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        heapify(arr,size,smallest);
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] ={54,53,55,52,50};
    int size = 5;
    for(int i=size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }
    print(arr,size);
}