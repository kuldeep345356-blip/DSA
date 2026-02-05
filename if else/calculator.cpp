#include<iostream>
using namespace std;
int main(){
    int n,m;
    char a;
    cout<<"Entre a 1st number :";
    cin>>n;
    cout<<"Enter a 2nd number :";
    cin>>m;
    cout<<"Enter a operator :";
    cin>>a;
    if(a=='+'){
        cout<<n+m;
    }
    else if (a=='-'){
        cout<<n-m;
    }
    else if (a=='*'){
        cout<<n*m;
    }
    else if (a=='/'){
        float b=n/m;
        cout<<b;
    }
}