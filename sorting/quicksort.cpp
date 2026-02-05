#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            print(arr,10);
            i++;
            j--;
        }
        
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int p= partition(arr,s,e);
    // cout<<p<<" a "<<s<<" "<<e<<endl;
    quicksort(arr,s,p-1);
    // cout<<p<<" b "<<s<<" "<<e<<endl;
    quicksort(arr,p+1,e);
}
int main(){
    int a[10]={3,1,4,5,2,7,8,10,23,13};
    quicksort(a,0,9);
    print(a,10);
}