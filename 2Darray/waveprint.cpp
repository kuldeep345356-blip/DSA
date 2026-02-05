#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a number of rows :";
    cin>>n;
    cout<<"Enter a number of columns :";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}