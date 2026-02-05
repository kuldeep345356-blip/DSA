#include<iostream>
#include<stack>
using namespace std;
class SpecialStack{
    private:
    int min;
    stack<int> s;
    public:
    void push(int data){
        if(s.empty()){
            s.push(data);
            min = data;
        }
        if(data<min){
            int val = 2*data-min;
            min = data;
            s.push(val);
        }
        else{
            s.push(data);
        }
    }
    int pop(){
        if(s.empty()){
            return -1;
        }
        if(s.top()>min){
            int val = s.top();
            s.pop();
            return val;
        }
        else{
            int prevmin = min;
            min = 2*min-s.top();
            s.pop();
            return prevmin;
        }
    }
    int top(){
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr>min){
            return curr;
        }
        else{
            return min;
        }
    }
    bool Empty(){
        return s.empty();
    }
    int getMin(){
        if(s.empty()){
            return -1;
        }
        else{
            return min;
        }
    }
};
int main(){
    SpecialStack *s = new SpecialStack();
    s->push(5);
    s->push(3);
    s->push(8);
    cout<<s->pop()<<endl;
    cout<<s->pop()<<endl;
    cout<<s->pop()<<endl;
}
