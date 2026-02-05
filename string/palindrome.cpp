#include<iostream>
using namespace std;
char lowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch+32;
    }
}
char reverse(char name[],int n){
    bool flag=true;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(lowercase(name[i])!=lowercase(name[j])){
            flag=false;
        }
    }
    return flag;
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
    cout<<"Enter name :";
    cin>>name;
    int length=getlength(name);
    bool flag =reverse(name,length);
    if(flag==true){
        cout<<name<<" is palindrome";
    }
    else{
        cout<<name<<" is not palindrome";
    }
}