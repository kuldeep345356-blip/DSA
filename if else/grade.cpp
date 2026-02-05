#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a marks :";
    cin>>n;
    if(n<=100 && n>80){
        cout<<"very good";
    }
    else if(n<=80 && n>60){
        cout<<"Good";
    }
    else if(n<=60 && n>40){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}