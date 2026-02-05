#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int *arr,int size){
    int count = 0;
    for(int i=0;i<size-1;i++){
        bool swapped = false;
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false) break;
    }
}
int main(){
    int arr[]={3,5,10,2,3,1,46,7,22};
    bubblesort(arr,9);
    print(arr,9);
}
