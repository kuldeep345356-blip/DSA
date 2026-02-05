#include<iostream>
using namespace std;
int binary(int a[],int n,int m){
    int start=0,end=n-1;

    int mid=(start+end)/2;

    while(start<=end){

        if(a[mid]==m){
            return mid;
        }

        if(m>mid){
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=(start+end)/2;

    }
    return -1;
}

int main(){
    int n,m;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elements of array :";

    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    cout<<"Enter a number :";
    cin>>m;

    int bs = binary(a,n,m);
    cout<<"index of "<<m<<" is "<<bs;
}