#include<iostream>
using namespace std;
int main(){
    int n,m=1;
    cout<<"Enter a number :";
    cin>>n;
    for(;n>0;){
        int a=n%10;
        n=n/10;
        m=m*a;
    }
    cout<<"The product of digits is :"<<m;
}