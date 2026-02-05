#include<iostream>
using namespace std;
bool check(string &str,int i){
    if(i==str.length()/2){
        return true;
    }
    if(str[i]!=str[str.length()-i-1]){
        return false;
    }
    else{
       check(str,++i);
    }
}
int main(){
    string name = "tabebat";
    bool ans = check(name,0);
    if(ans){
        cout<<"string is palindrome "<<endl;
    }
    else{
        cout<<"string is not palindrome "<<endl;
    }
} 