#include<iostream>
using namespace std;
bool search(int a[][4],int n,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==n){
                return 1;
            }
        }
    }
    return 0;
}
void colsum(int a[][4],int i,int j){
    int max= INT16_MIN;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=a[j][i];
        }
        if(max<sum){
            max=sum;
        }
        max=sum;
        cout<<"sum of "<<i+1<<" row is :"<<sum<<endl;
    }
    cout<<max<<endl;
}
int main(){
    int a[3][4],n;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter a number to search :";
    cin>>n;
    if(search(a,n,3,4)){
        cout<<"Element is present "<<endl;
    }
    else{
        cout<<"Element is not present "<<endl;
    }
    colsum(a,3,4);
}