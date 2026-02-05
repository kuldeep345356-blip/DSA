#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of rows :";
    cin>>n;
    int a=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<"   ";
        }
        for(int k=1;k<=i;k++){
            cout<<" * ";
        }
        a--;
        cout<<endl;
    }
}
