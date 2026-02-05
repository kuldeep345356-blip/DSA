#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a 1st side :";
    cin>>a;
    cout<<"Enter a 2nd side :";
    cin>>b;
    cout<<"Enter a 3rd side :";
    cin>>c;
    if((a+b)>c && (c+b)>a && (c+a)>b){
        cout<<"Valid triangle";
    }
    else{
        cout<<"Invalid triangle";
    }
}