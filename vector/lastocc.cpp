#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<6;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Entre a number :";
    int n,occ=-1;
    cin>>n;
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            occ=i;
        }
    }
    cout<<occ<<endl;
}