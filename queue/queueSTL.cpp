#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(7);
    q.push(5);
    q.push(3);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    // cout<<q.swap()<<endl;
}