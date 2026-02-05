#include<iostream>
using namespace std;
void merge(int a[],int b[],int n,int m,int c[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }
}
int main(){
    int n,m;
    cout<<"Enter a size of first array :";
    cin>>n;
    cout<<"Enter a size of second array :";
    cin>>m;
    int a[n],b[m],c[n+m];
    cout<<"Enter an elements of first array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter an elements of second array :";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    merge(a,b,n,m,c);
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}