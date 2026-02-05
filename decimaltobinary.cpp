#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int i=0;
    vector<int> v;

    while(n!=0){
        int bit = n & 1;
        v.push_back(bit);
        n = n>>1;
    }

    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}