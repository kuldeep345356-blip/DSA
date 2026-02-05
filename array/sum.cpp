#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n],sum=0;
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"Tne sum of all elements of array is :"<<sum;
}