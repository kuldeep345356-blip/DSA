#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    vector<int> a(5,1);
    vector<int> b(v);
    for(int i=0;i<5;i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
     for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    // cout<<endl<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.begin()<<endl;
     for(int i=0;i<b.size();i++){
        cout<<b.at(i)<<" ";
    }
}