#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elenments of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"The reverse of array is :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}