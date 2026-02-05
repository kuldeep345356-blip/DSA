#include<bits/stdc++.h>
using namespace std;
int Coinchange_1(int coin[],int n,int target){
    int t[n+1][target+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(i==0) t[i][j] = 0;
            if(j==0) t[i][j] = 1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(coin[i-1]<=j){
                t[i][j] = t[i-1][j] + t[i][j-coin[i-1]];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    return t[n][target];
}
int main(){
    int coin[] = {1,2,3};
    int n = 3;
    int target = 5;
    cout<<Coinchange_1(coin,n,target)<<endl;
}