#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
     
    for(int i=0;i<5;i++){
        int element ;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,6);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+3);
      for(int i:v){
        cout<<i<<" ";
    }
}