#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> nextsmaller(vector<int> &v){
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        int curr = v[i];
        while(s.top()>=curr){
            s.pop(); 
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
int main(){
    vector<int> v ;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    print(v);
    vector<int> ans = nextsmaller(v);
    print(ans);
}