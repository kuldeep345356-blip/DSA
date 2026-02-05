// #include<iostream>
// #include<unordered_map>
// #include<list>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
    public:
    unordered_map<T,list<T>> adj;

    void addEdge(T u,T v,bool direction){
        adj[u].push_back(v);

        if(!direction){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};

int main(){
    int n,m;
    cin>>n>>m;

    Graph<int> g;

    for(int i=0;i<m;i++){
        int u,v;
        bool dir;
        cin>>u>>v>>dir;

        g.addEdge(u,v,dir);
    }

    g.print();
}