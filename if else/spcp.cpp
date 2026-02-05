#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a selling price :";
    cin>>n;
    cout<<"Enter a cost price :";
    cin>>m;
    if(n>m){
        cout<<"profit is :"<<n-m;
    }
    else if(m>n){
        cout<<"loss is :"<<m-n;
    }
    else{
        cout<<"No profit No loss";
    }
}