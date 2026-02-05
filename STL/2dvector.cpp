#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v;
    v={{0,0,0,0},{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}