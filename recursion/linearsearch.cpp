#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        linearsearch(arr+1,size-1,key);
    }
}
int main(){
    int a[6]={2,4,6,9,11,13};
    int key =13;
    bool ans = linearsearch(a,6,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{ 
        cout<<"not present"<<endl;
    }
}