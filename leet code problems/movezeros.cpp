#include<iostream>
using namespace std;
void movezero(int a[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            swap(a[j],a[i]);
            i++;
        }
    }
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
    movezero(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}