#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre a size of array :";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    cout<<"The reverse of array is :";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}