#include<bits/stdc++.h>
using namespace std;
int t[5][5];
int knapsack(int wt[],int val[],int w,int n){
    if(n==0 || w==0) return 0;

    if(t[n][w]!=0) return t[n][w];

    if(wt[n-1]<=w){
        return t[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else{
        return t[n][w] = knapsack(wt,val,w,n-1);
    }
}

 void print(){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

int main(){
    int val[4]={1,4,5,7};
    int wt[4] = {1,3,4,5};
    int w = 7;
    cout<<knapsack(wt,val,w,4)<<endl;
    print();
}