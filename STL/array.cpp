#include<iostream>
#include<array>
// void print (int b){
//     cout<<b<<endl;
// }
using namespace std;
int main(){
    array<int ,5> a;
    // print(a.at(2));
    // print(a.back());
    // print(a.front());
    // print(a.empty());
    cout<<a.at(2)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.back()<<endl;
    cout<<a.front()<<endl;
    cout<<a.size()<<endl;
}