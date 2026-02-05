#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=a[i];
    }
    for(int i=0;i<n;i++){
        ans^=i;
    }
    cout<<"The duplicate number in array is :"<<ans;
}