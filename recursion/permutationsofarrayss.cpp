#include<iostream>
#include<vector>
#include<string>
using namespace std;

 
void print(vector<string> &ans){
    for(int i=0;i<ans.size();i++){
        cout<<" ";
        for(int j=i;j<ans[i].length();j++){
            cout<<ans[i][j];
        }
        cout<<"  ";
    }
    cout<<endl;
}


void solve(int index,string str,vector<string> &ans){
    if(index>=str.length()){
        ans.push_back(str);
        return ;
    }
    for(int i=index;i<str.length();i++){
        swap(str[i],str[index]);
        solve(index++,str,ans);
        swap(str[i],str[index]);
    }
}


vector<string> permutationofstrings(string str){
    int index=0;
    vector<string> ans;
    solve(index,str,ans);
    return ans;
}


int main(){
     string str = "abc";
     vector<string> ans=permutationofstrings(str);
     print(ans);
}