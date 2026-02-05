#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a first number :";
    cin>>a;
    cout<<"Enter a second number :";
    cin>>b;
    cout<<"Enter a third number :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest number";
        }
        else{
            cout<<c<<" is greatest number ";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest number ";
        }
        else{
            cout<<c<<" is greatest number ";
        }
    }
}