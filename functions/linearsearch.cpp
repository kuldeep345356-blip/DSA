#include<iostream>
using namespace std;
bool linearsearch(int arr[],int key,int size){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        linearsearch(arr+1,key,size-1);
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=6;
    int ans = linearsearch(arr,key,size);
    cout<<ans;
}