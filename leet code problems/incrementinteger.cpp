#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr){
    int carry = 0;
    int n = arr.size();
    arr[n-1] +=1;

    for(int i=n-1;i>=0;i--){
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum/9;
    }

    if(carry){
        arr.push_back(carry);
        for(int i=arr.size()-1;i>0;i--){
            swap(arr[i],arr[i-1]);
        }
    }

}

int main(){
    vector<int> arr = {9,9,9};
    
    solve(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }

    cout<<endl;
}