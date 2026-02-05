#include<iostream>
using namespace std;
void reverse(char name[],int length){
    for(int i=0,j=length-1;i<j;i++,j--){
        swap(name[i],name[j]);
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
    count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name :";
    cin>>name;
    cout<<"your name is :"<<name<<endl;
    int length=getlength(name);
    cout<<"length :"<<length<<endl;
    reverse(name ,length);
    cout<<"reverse name is :"<<name<<endl;
}