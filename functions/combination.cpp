#include<iostream>
using namespace std;
int factorial(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
void combination(int n,int r){
    int com=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<com;
    return;
}
int main(){
    int n,r;
    cout<<"Enter value of n :";
    cin>>n;
    cout<<"Enter value of r :";
    cin>>r;
    combination(n,r);
}