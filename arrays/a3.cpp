#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int i=0;
    int end=size-1;
    while(i<end){ 
        swap(arr[i],arr[end]);
        i++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    reverse(arr,size);
}