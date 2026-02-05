#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    cout<<"The factorial of given number is :"<<a;
}