#include<bits/stdc++.h>
using namespace std;

int solve(int n ,int time){
    int flag = 1;
    int count = 1;

    while(time--){
        if(flag){
            count++;
        }
        else{
            count--;
        }
        if(count==n) flag = !flag;
    }

    return count;
}

int main(){
    int n = 3;
    int time = 2;
    cout<<solve(n,time)<<endl;
}