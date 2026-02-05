#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;
    }
}
