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
    // cout<<"Enter a number :";
    // int n,count=0;
    // cin>>n;
    // for(int i:v){
    //     if(i==n){
    //         count++;
    //     }
    // }
    // cout<<count;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
}