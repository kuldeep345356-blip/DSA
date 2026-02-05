#include<iostream>
using namespace std;
int pivot(int a[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return a[s];
}
int main(){
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<pivot(a,n);
}