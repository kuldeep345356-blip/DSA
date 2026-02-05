#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string &s,int i,int j){
    while(i<=j){
        if(s[i++]!=s[j--]) return false;
    }
    return true;
}

int solve(string &s,int i,int j,vector<vector<int>> &t){
    if(i>=j ) return 0;
    
    if(t[i][j]!=-1) return t[i][j];
    
    if(ispalindrome(s,i,j)) return 0;
    
    int mini = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int left , right;
        if(t[i][k]!=-1){
            left = t[i][k];
        }
        else{
            left = solve(s,i,k,t);
            t[i][k]=left;
        }
        
        if(t[k+1][j]!=-1){ 
            right = t[k+1][j];
        }
        else{ 
            right = solve(s,k+1,j,t);
            t[k+1][j]=right;
        }
        
        int temp = left + right  + 1;
        mini = min(mini,temp);
    }
    
    return t[i][j] = mini;
}
int main(){
    string s = "abcbe";
    int n = s.size();
    vector<vector<int>> t(n,vector<int>(n,-1));
    cout<<solve(s,0,n-1,t)<<endl;

    for(auto i:t){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}