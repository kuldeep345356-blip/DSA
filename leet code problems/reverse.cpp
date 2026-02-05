#include<iostream>
using namespace std;
void reverse(int a[],int n){
    for(int i=0,j=n-1;i<=j;i++,j--){
        swap(a[i],a[j]);
    }
}
int main(){
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter aa elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,n);
    cout<<"reverse array is :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}