#include<bits/stdc++.h>
using namespace std;
    int solve(int w,int val[],int wt[],int n,vector<vector<int>> &t){
        if(w==0 || n==0) return 0;
        
        if(t[n][w]!=-1) return t[n][w];
        
        if(wt[n-1]<=w) {
            return t[n][w] = max(solve(w-wt[n-1],val,wt,n-1,t)+val[n-1],solve(w,val,wt,n-1,t));
        }
        
        else{
            return t[n][w] = solve(w,val,wt,n-1,t);
        }
    }
    void print(vector<vector<int>> &t){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
int main(){
    vector<vector<int>> t(1001,vector<int>(1001,-1));
    int val[] = {1,4,5,7};
    int wt[] = {1,3,4,5};
    int w = 7;
    cout<<solve(w,val,wt,4,t)<<endl;
    print(t);
}
