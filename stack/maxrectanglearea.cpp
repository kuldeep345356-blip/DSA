#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmaller(vector<int> v,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = v[i];
        while(s.top()!=-1 && v[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int> v,int n){
    stack<int> s;
    s.push(n);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = v[i];
        while(s.top()!=n && v[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

int largestArea(vector<int> v){
    int n=v.size();
    vector<int> next;
    next = nextSmaller(v,n);
    vector<int> prev;
    prev = prevSmaller(v,n);
    int area = -1;
    for(int i=0;i<n;i++){
        int l = v[i];
        int b = next[i]-prev[i]-1;
        int newarea = l*b;
        area = max(area,newarea);
    }
    return area;
}

int maxRectangleArea(vector<vector<int>> &mat){
    int area = largestArea(mat[0]);
    for(int i=1;i<mat.size();i++){
        for(int j=0;i<mat.size();j++){
            if(mat[i][j]!=0){
                mat[i][j] = mat[i][j]+mat[i-1][j];
            }
            else{
                mat[i][j]=0;
            }
        }
        area = max(area,largestArea(mat[i]));
    }
    return area;
}

int main(){
    vector<vector<int>> mat;
    mat = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0,} };
    cout<<maxRectangleArea(mat)<<endl;
}
