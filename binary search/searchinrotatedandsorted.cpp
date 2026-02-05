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
    return s;
}
int binary(int a[],int s,int e,int m){

    int mid=s+(e-s)/2;

    while(s<=e){

        if(a[mid]==m){
            return mid;
        }

        if(m>mid){
            s=mid+1;
        }

        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;

    }
    return -1;
}
int findposition(int a[],int n,int m){

    int p=pivot(a,n);

    if(m>=a[p] && m<=a[n-1]){
        binary(a,p,n-1,m);
    }
    
    else{
        binary(a,0,p-1,m);
    }
}
int main(){
    int n,m;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter a number :";
    cin>>m;
    cout<<findposition(a,n,m);
}