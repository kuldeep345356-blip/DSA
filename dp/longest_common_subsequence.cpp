#include<bits/stdc++.h>
using namespace std;
int LCS(int n,int m,string x,string y){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                t[i][j] =0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(x[i-1]==y[j-1]){
                t[i][j] = t[i-1][j-1] +1;
            }
            else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return t[n][m];
}
int main(){
    string x = "abcdglh";
    string y = "abedfhl";
    cout<<x.size()<<endl;
    cout<<y.size()<<endl;
    int n = x.length();
    int m = y.length();
    cout<<LCS(n,m,x,y)<<endl;
}