#include<iostream>
using namespace std;
class human{
    public:
    double heigth;
    int age,weigth;
    int getage(){
        return age;
    }
    void setweigth(int w){
        this->weigth=w;
    }
    human(){
        cout<<"human class's constructor called"<<endl;
    }
    void print(){
        cout<<this->heigth<<endl;
        cout<<this->age<<endl;
        cout<<this->weigth<<endl;
    }
};
class male: private human{
    public:
    string name;
    male(){
        cout<<"male class's constructor called"<<endl;
    }
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    void setheigth(double h){
        this->heigth=h;
    }
    double getheigth(){
        return this->heigth;
    }
};
int main(){
    male m;
    human h;
    h.heigth=1.85;
    // cin>>h.heigth;
    h.age=20;
    h.weigth=60;
    m.setheigth(1.86);
    m.name="Kuldeep";
    h.setweigth(58);
    cout<<m.name<<endl;
    m.sleep();
    cout<<m.getheigth()<<endl;
    h.print();
}