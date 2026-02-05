#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1,b=1,sum=0;
    if(n==1) cout<<0;
    if(n==2 || n==3){ 
        cout<<1;
    }
    for(int i=4;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<sum<<endl;
}