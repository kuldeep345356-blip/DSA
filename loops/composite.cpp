#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==1){
        cout<<"composite number";
    }
    else{
        cout<<"prime number ";
    }
}