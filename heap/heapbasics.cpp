#include<iostream>
#include<vector>
using namespace std;

class heap{
    public:
    int arr[100];
    int size ;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int data){
        int index = ++size;
        arr[index] = data;

        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void Delete(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return ;
        }

        arr[1] = arr[size];
        size--;

        int i=1;
        while(i<size){
            int leftindex = i*2;
            int rightindex = (i*2)+1;

            if(leftindex<size && arr[leftindex]>arr[i]){
                swap(arr[leftindex],arr[i]);
                i = leftindex;
            }
            else if(rightindex<size && arr[rightindex]>arr[i]){
                swap(arr[rightindex],arr[i]);
                i = rightindex;
            }
            else{
                return ;
            }
        }
    }
};

void heapify(int arr[],int size,int i){
    int largest = i;
    int left = 2*i;
    int right = (2*i)+1;

    if(left<size && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<size && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,size,largest);
    }
}

void print (int arr[],int size){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.Delete();
    h.print();

    int arr[] ={-1,54,53,55,52,50};
    int size = 5;
    for(int i=size/2;i>0;i--){
        heapify(arr,size,i);
    }
    print(arr,size);
}