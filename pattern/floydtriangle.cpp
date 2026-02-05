#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter a number of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}