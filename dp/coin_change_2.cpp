#include<bits/stdc++.h>
using namespace std;
int Coinchange2(int coin[],int n,int target){
    int t[n+1][target+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(j==0) t[i][j] = 0;
            if(i==0) t[i][j] = INT_MAX-1;
            if(i==1 && j!=0){
                if(j%coin[0]==0) t[i][j] = j/coin[0];
                else t[i][j] = INT_MAX-1;
            }
        }
    }
    // for(int j=1;j<=target;j++){
    //     if(j%coin[0]==0)
    // }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(coin[i-1]<=j)
                t[i][j] = min(t[i-1][j],1+t[i][j-coin[i-1]]);
            else
                t[i][j] = t[i-1][j];
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
    int coin[] ={3,4,5};
    int n = 3;
    int target = 5;
    cout<<Coinchange2(coin,n,target);
}