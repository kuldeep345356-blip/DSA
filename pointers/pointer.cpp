#include<iostream>
using namespace std;

//    int arr[10]={1,2,3,4,5};
//    char ch[6]={"abcde"};
//    cout<<arr<<endl;
//    cout<<ch<<endl;
//    char *c=&ch[0];
//     cout<<*c<<endl;
//     // print entire string
//     cout<<c<<endl;

//     char temp='z';
//     char *p=&temp;
//     cout<<p<<endl;
    // int i=5;
    // int *p=&i;
    // int **p2=&p;
    // cout<<p<<endl;
    // cout<<*p2<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;
    // cout<<p2<<endl;
    // cout<<&p<<endl;
    // cout<<&p2<<endl;
    // int getsum(int *arr,int n){
    //     int sum=0;
    //     for(int i=0;i<n;i++){
    //         sum +=arr[i];
    //     }
    //     return sum;
    // }
    // int main(){
    // int n;
    // cin>>n;
    // int *arr=new int[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int ans = getsum(arr,n);
    // cout<<"Answer :"<<ans<<endl;
    // void fun(int i){
    //     cout<<i<<endl;
    //     fun(i);
    // }
    int main(){
        int n,m;
        cin>>n>>m;
        int **arr=new int *[n];
        for(int i=0;i<m;i++){
            arr[i]=new int [n];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            delete []arr[i];
        }
        delete []arr;
//       
    }