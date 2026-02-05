#include<iostream>
using namespace std;
int factorial(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int combination(int n,int r){
    int com =factorial(n)/(factorial(r)*factorial(n-r));
    return  com;
}
int main(){
    int n;
    cout<<"Enter a number of rows :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"   ";
        }
        for(int k=0;k<=i;k++){
            cout<<" "<<combination(i,k)<<"    ";
        }
        cout<<endl;
    }
}  