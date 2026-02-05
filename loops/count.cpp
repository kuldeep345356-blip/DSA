#include<iostream>
using namespace std;
int main (){
    int n,m=0;
    cout<<"Enter a number :";
    cin>>n;
    for(;n>0;){
        n=n/10;
        m=m+1;
    }
    cout<<m;
}