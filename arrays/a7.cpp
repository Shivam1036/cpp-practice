#include<iostream>
using namespace std;

void intersection(int arr1[],int n1,int arr2[],int n2){
    cout<<"intersecton of both arrays are "<<endl;
    
    for(int i=0;i<n1+n2;i++){
        int count=0;
        for(int j=0;j<n1+n2;j++){
            if(arr1[j]==arr2[i]){
                count++;

            }
        }
        if(count==1){
            cout<<arr1[i]<<endl;
        }
    }
    return;
}

int main(){
    int arr1[]={18,5,11,3,1,5};
   // int n1=6;
    int arr2[]={18,5,11,3};
    int n1=6,n2=4;

    intersection(arr1,n1,arr2,n2);
}