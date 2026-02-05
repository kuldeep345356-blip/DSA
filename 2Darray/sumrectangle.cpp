#include<iostream>
using namespace std;
int main(){
    int n,m,a1,a2,b1,b2;
    cout<<"Enter a number of rows :";
    cin>>n;
    cout<<"Enter a number of columns :";
    cin>>m;
    cout<<"Enter a first coordinateS :";
    cin>>a1>>a2;
    cout<<"Enter a second coordinates :";
    cin>>b1,b2;
    int a[n][m],sum=0;
    cout<<"Enter an elements of matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=a1;i<b1;i++){
        for(int j=a2;j<b2;j++){
           sum +=a[i][j];
        }
    }
    cout<<"Maximum element of matrix is :"<<sum;
}