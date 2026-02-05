#include<iostream>
using namespace std;
void print (int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int s,int e){
    print(arr,6);
    int mid = (s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1] ;
    int *second = new int[len2];

    int mainarrayindex=s;

    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex];
        mainarrayindex++;
    }

    mainarrayindex=mid+1;

    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex];
        mainarrayindex++;
    }

    int index1=0,index2=0;
    mainarrayindex=s;

    while (index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex]= first[index1];
            mainarrayindex++;
            index1++;
        }
        else{
            arr[mainarrayindex]=second[index2];
            mainarrayindex++;
            index2 ++;
        }
    }
    
    while(index1<len1){
        arr[mainarrayindex]= first[index1];
            mainarrayindex++;
            index1++;
    }

     while(index2<len2){
        arr[mainarrayindex]= second[index2];
            mainarrayindex++;
            index2++;
    }
    
    delete []first;
    delete []second;

}
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int mid = (e+s)/2;  
    cout<<s<<" a "<<e<<endl;
    mergesort(arr,s,mid);
    cout<<s<<" b "<<e<<endl;
    mergesort(arr,mid+1,e);
    cout<<s<<" c "<<e<<endl;
    merge(arr,s,e);
}
int main(){
    int a[]={2,5,1,9,6,4};
    mergesort(a,0,5);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}