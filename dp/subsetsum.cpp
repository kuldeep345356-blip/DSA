#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,7,8,10};
    int sum = 11 ;
    vector<vector<bool>> t(6,vector<bool>(sum+1));
    for(int i=0;i<6;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j] = false;
            }
            if(j==0){
                t[i][j] = true;
            }
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<sum+1;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<6;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<sum+1;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<t[5][sum]<<endl;
}