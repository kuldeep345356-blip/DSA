#include<iostream>
using namespace std;
int frist(int a[],int n,int m){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(a[mid]==m){
            ans=mid;
            e=mid-1;
        }
        else if(m<a[mid]){
            e = mid-1;
        }
        else if(m>a[mid]){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int last(int a[],int n,int m){
    int s=0,e=n-1;
    int mid =s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(a[mid]==m){
            ans=mid;
            s=mid+1;
        }
        else if(m<a[mid]){
            e = mid-1;
        }
        else if(m>a[mid]){
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    cout<<"Emter an elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter a number :";
    cin>>m;
    int f = frist(a,n,m);
    int l = last(a,n,m);
    cout<<"frist occurence of "<<m<<" is at index :"<<f<<endl;
    cout<<"last occurence of "<<m<<" is at index :"<<l;
}