#include<bits/stdc++.h>
using namespace std;
int t[6][6];
int mcm(int arr[],int i,int j,vector<vector<int>> &t){
    if(i==j) return 0;

    if(t[i][j]!=-1) return t[i][j];
    int mini = INT_MAX;

    for(int k=i;k<=j-1;k++){
        int temp = mcm(arr,i,k,t)+mcm(arr,k+1,j,t)+(arr[i-1]*arr[k]*arr[j]);
        mini = min(mini,temp);
    }

    return t[i][j] = mini;
}
int main(){
    int arr[] ={10,30,5,60};
    vector<vector<int>> t(4,vector<int>(4,-1));
    cout<<mcm(arr,1,3,t)<<endl;
    for(auto i : t){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}