#include<bits/stdc++.h>
using namespace std;
int longestCommonSubstr(string& s1, string& s2) {
    int n = s1.length();
    int m = s2.length() ;
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0) t[i][j] = 0;
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){  
            if(s1[i-1]==s2[j-1]){
                t[i][j] = 1+t[i-1][j-1];
                ans = max(ans,t[i][j]);
                // cout<<ans<<endl;
            }
            else{
                t[i][j] = 0;
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    // int maxi = 0;
    // for(auto i:t[n]){
    //     maxi = max(maxi,i);
    // }
    return ans;
}
//ABCD
//ABC
int main(){;
    string a = "abcde";
    string b = "abfce";
    cout<<longestCommonSubstr(a,b)<<endl;
}