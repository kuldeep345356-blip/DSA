#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
    int mid = s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
       return binarysearch(arr,s,mid-1,key);
    }
    else{
       return binarysearch(arr,mid+1,e,key);
    }
}
int main(){
    int a[6]={2,4,6,10,14,16};
    int key =14;
    bool ans = binarysearch(a,0,5,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}