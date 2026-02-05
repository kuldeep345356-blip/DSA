#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int k){
    int start=0,end=s-1;
    int mid=(start+end)/2;
    if(start>end){
        return false;
    }
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        binarysearch(arr,mid-1,k);
    }
    else{
        binarysearch(arr+mid,s-mid+1,k);
    }
}
int main(){
    int arr[11]={2,4,6,10,14,18,22,38,49,55,222};
    int size=11;
    int key=222;
    int ans = binarysearch(arr,size,key);
    cout<<ans;
}