#include<iostream>
using namespace std;
int sum( int a){
    if(a==1) return 1;
    return a+sum(a-1);
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    long long int s=sum(n);
    cout<<s;
}