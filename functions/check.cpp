#include<iostream>
using namespace std;
bool sort(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        sort(arr+1,size-1);
    }
}
int main (){
    int arr[5]={2,4,6,8,9};
    int size=5;
    bool ans= sort(arr,size);
    cout<<ans;
}