#include<iostream>
using namespace std;
int max(int a[],int n){
    int s=0,e=n-1;
    int mid =s+(e-s)/2;
     while(s<e){
        if(a[mid]<a[mid+1]){
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
    cout<<"Enter an elements of arrray :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int bs =max(a,n);
    cout<<"The maximum elememt of array is :"<<bs;
}