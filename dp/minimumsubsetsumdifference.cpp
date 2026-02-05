#include<bits/stdc++.h>
using namespace std;
vector<int> Subset(int n,int arr[],int sum){
    vector<vector<bool>> t(n+1,vector<bool>(sum+1));

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j] = false;
            }
            if(j==0){
                t[i][j] = true;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int> ans;
    for(int i=0;i<t[n].size();i++){
        if(t[n][i]==true){
            ans.push_back(i);
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return ans;
}
int MinimumSubset(int arr[],int n){
    int range = 0;
    for(int i=0;i<n;i++){
        range = range + arr[i];
    }
    vector<int> ans = Subset(n,arr,range/2);
    int mn = INT_MAX;
    for(int i=0;i<ans.size();i++){
        mn = min(mn,range-(2*ans[i]));
    }
    return mn;
}
int main(){
    int arr[] = {1,2,7};
    int n = 3;
    cout<<MinimumSubset(arr,n)<<endl;
}