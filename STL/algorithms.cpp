#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int > v;
    for(int i=0;i<7;i++){
        cin>>i;
        v.push_back(i);
    }
    cout<<binary_search(v.begin(),v.end(),7);
}