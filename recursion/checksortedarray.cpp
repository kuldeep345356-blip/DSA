#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    if(size==0||size==1) {
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{ 
        return issorted(arr+1,size-1);
    }
};
int main(){
    int a[6]={2,4,6,9,11,13};
    bool ans=issorted(a,6);
    if(ans){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
}