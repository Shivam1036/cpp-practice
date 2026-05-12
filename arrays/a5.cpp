#include<iostream>
using namespace std;

void Swap(int arr[],int size){

    int max=arr[0];
    int min=arr[0];
    int a=0,b=0;
    int i=0;
    while(i<size){
     if(arr[i]>max){ 
     max=arr[i];
     a=i;
     }
     i++;
    }

    int j=0;
    while(j<size){
     if(arr[j]<min){ 
     min=arr[j];
     b=j;
     }
     j++;
    }
    swap(arr[a],arr[b]);
    return;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    Swap(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}