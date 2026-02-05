#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello 1"<<endl;
    }
    void sayhello(int a){
        cout<<"hello 2"<<endl;
    }
    void sayhello(string name){
        cout<<"hello 3"<<endl;
    }
};
class B{
     public:
     int a,b;
     int  add(){
        return a+b;
     }
     int  operator+ (B &obj){
        int value1= this->a;
        int value2= obj.a;
        cout<<value2-value1<<endl;
        return value2-value1;
     }
     void operator() (){
        cout<<"bracket"<<endl;
     }
     void operator*(B &obj){
        int value1 = this->b;
        int value2 = obj.b;
        cout<<value1<<endl;
        cout<<value2<<endl;
        cout<<value1*value2<<endl;
     }
};
class animal{
    public:
    void speak(){   
        cout<<"speaking "<<endl;
    }
};
class dog : public animal{
    public:
    void speak(){
        cout<<"barking "<<endl;
    }
};
int main(){
    A obj;
    obj.sayhello();
    obj.sayhello(6);
    obj.sayhello("kuldeep");
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1.b=5;
    obj2.b=obj1+obj2;
    obj1();
    obj1 * obj2;
    dog d;
    d.speak();
}