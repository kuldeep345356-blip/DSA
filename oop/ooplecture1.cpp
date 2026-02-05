#include<iostream>
using namespace std;
class hero{
    int level;
    string name;
    public:
    static int timetocomplete;
    static void random(int a){
        timetocomplete=a;
    }
    void setlevel(int level){
        this->level=level;
    }
    void setname(string name){
        this->name=name;
    }
    void print(){
        cout<<level<<endl;
        cout<<name<<endl;
        cout<<this<<endl;
    }  
    int getlevel(){
        return level;
    }
    string getname(){
        return name;
    }
    // defult constructor 
    hero (){
        cout<<"Simple Constructor called"<<endl;
    }
    // parameterised constructor
    hero(int level,string name){
        cout<<"constructor called"<<endl;
        this->level = level;
        this->name=name;
        cout<<this<<endl;
    }
    // copy constructor
    hero(hero& temp){
        cout<<"copy constructor called"<<endl;
        this->level=temp.level;
        this->name=temp.name;
    }
    ~hero(){
        cout<<"Destructor called"<<endl<<endl;
    }
};
int hero::timetocomplete=50;
int main(){
    cout<<hero::timetocomplete<<endl;
    hero::random(60);
    cout<<hero::timetocomplete<<endl;
    hero a(70,"kuldeep");
    a.print();
    hero *b = new hero (80,"gabbar");
    b->print();
    delete b;


    // hero a(70,"kuldeep");
    // a.print();
    // // copy constructor called
    // hero b=a;
    // hero b(a);
    // b.print();
    // hero c(80,"babbar");
    // c.print();
    // // copy assignment operator 
    // a=c;
    // a.print();
    // c.print();
    // // copy assignment operator 
    // c=b;
    // c.print();


    // int a=5;
    // string b="Ramesh";
    // hero Ramesh(a,b);
    // Ramesh.print();
    // Ramesh.setlevel(6);
    // Ramesh.setname("abcd");
    // hero*h=&Ramesh;
    // cout<<h<<endl;
    // cout<<Ramesh.getlevel()<<endl;
    // cout<<Ramesh.getname()<<endl;
    // Ramesh.print();
    // hero *c = new hero(7,"abcd");
    //  cout<<c<<endl;
    // cout<<c->getlevel()<<endl;
    // cout<<c->getname()<<endl;


    // hero *a = new hero;
    // a->setlevel(6);
    // a->setname("kuldeep");
    // cout<<a<<endl;
    // cout<<a->getlevel()<<endl;
    // cout<<a->getname()<<endl;
    // hero b;
    // b.setlevel(7);
    // b.setname("abdc");
    // cout<<b.getlevel()<<endl;
    // cout<<b.getname()<<endl;

    // const keyword , initialization list
}
