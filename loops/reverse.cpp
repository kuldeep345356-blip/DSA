#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cout<<"Enter a number :";
    cin>>n;
    for(;n>0;){
        int a=n%10;
        n=n/10;
        m=(m+a)*10;
    }
    m=m/10;
    cout<<"The reverse of number is :"<<m;
}