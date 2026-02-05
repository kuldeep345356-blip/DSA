
#include <iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
    private:

    bool issafe(vector<vector<int>> &mat,int n,int x,int y,vector<vector<int>> &visited){
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && mat[x][y]==1 ){
            return true;
        }
        else{
            return false; 
        }
    }

    void solve(vector<vector<int>> &mat,int n,vector<string> &ans,int x,int y, vector<vector<int>> &visited,string path){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        
        int newx=x+1;
        int newy=y;
        if(issafe(mat,n,newx,newy,visited)){
            path.push_back('D');
            solve(mat,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        newx=x;
        newy=y-1;
        if(issafe(mat,n,newx,newy,visited)){
            path.push_back('L');
            solve(mat,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        newx=x;
        newy=y+1;
        if(issafe(mat,n,newx,newy,visited)){
            path.push_back('R');
            solve(mat,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        newx=x-1;
        newy=y;
        if(issafe(mat,n,newx,newy,visited)){
            path.push_back('U');
            solve(mat,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        visited[x][y]=0;
    }

  public:

    vector<string> findPath(vector<vector<int>> &mat) {
    vector<string> ans;
    if(mat[0][0]==0){
        return ans;
    }
    int scrx=0;
    int scry=0;
    vector<vector<int>> visited = mat;
     for(int i=0;i<mat.size();i++){
         for(int j=0;j<mat.size();j++){
             visited[i][j]=0;
         }
     }
     string path = "";
     solve (mat,mat.size(),ans,scrx,scry,visited,path);
     return ans;
    }
};



int main() {
    vector<vector<int>> v ;
    v={{1,0,0,0},{1,1,0,1},{1,1,0,0,},{0,1,1,1}};
    Solution obj;
    vector<string> ans = obj.findPath(v);
    
}