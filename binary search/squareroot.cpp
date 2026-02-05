#include<iostream>
using namespace std;
long long int squareint(int n){
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double squaredecimal(int n,int m,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<m;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int temp=squareint(n);
    cout<<squaredecimal(n,4,temp);
}