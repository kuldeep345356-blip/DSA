#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
        swap(a[i],a[i+1]);
        }
    }
    cout<<"The alternate swap of array is :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



