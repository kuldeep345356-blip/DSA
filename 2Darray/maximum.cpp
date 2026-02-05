#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a number of rows :";
    cin>>n;
    cout<<"Enter a number of columns :";
    cin>>m;
    int a[n][m];
    cout<<"Enter an elements of matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int max =a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<a[i][j]) max=a[i][j];
        }
    }
    cout<<"Maximum element of matrix is :"<<max;
}