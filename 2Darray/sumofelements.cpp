#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a number of rows :";
    cin>>n;
    cout<<"Enter a number of columns :";
    cin>>m;
    int a[n][m],sum=0;
    cout<<"Enter an elements of matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum +=a[i][j];
        }
    }
    cout<<"sum of  element of matrix is :"<<sum;
}