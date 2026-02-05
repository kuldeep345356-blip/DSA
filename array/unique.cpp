#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a number :";
    cin>>m;
    int n=2*m+1,a[n],unique=0;
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        unique ^=a[i];
    }
    cout<<"Tne "<<unique<<" is unique in given array ";
}