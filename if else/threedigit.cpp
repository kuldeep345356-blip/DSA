#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre a number :";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"three digit number ";
    }
    else{
        cout<<"Not a three digit number";
    }
}