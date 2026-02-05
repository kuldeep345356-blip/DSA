#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of rows :";
    cin>>n;
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<" * ";
        }
        a=a-1;
        cout<<endl;
    }
}