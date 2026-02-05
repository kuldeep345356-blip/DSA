#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0],secmax=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max =a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>secmax && a[i]!=max) secmax=a[i];
    }
    cout<<"The second largest number of array is :"<<secmax;
}