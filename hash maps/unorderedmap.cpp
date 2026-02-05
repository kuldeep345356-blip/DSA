#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    //insertion
    pair<string,int> p = make_pair("kuldeep",3);
    m.insert(p);

    //insertion
    pair<string,int> pair2("abcd",2);
    m.insert(pair2);

    //insertion
    m["mera"] = 4;

    //update
    m["mera"] = 6;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("kuldeep")<<endl;
    cout<<m.at("abcd")<<endl;
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;

    //size
    cout<<m.size()<<endl;

    //check presence
    cout<<m.count("kuldeep")<<endl;

    //erase
    m.erase("kuldeep");
    cout<<m.size()<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    unordered_map<string,int> ::iterator i = m.begin();
    while(i != m.end()){
        cout<<i->first<<" "<<i->second<<endl;
        i++;
    }
}