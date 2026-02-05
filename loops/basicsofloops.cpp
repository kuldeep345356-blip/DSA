#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a 1st number :";
    cin>>n;
    cout<<"Enter a 2nd number :";
    cin>>m;
    for(int i=1;i<=n;i++){
        cout<<m*i<<endl;
        continue; 
    }
}