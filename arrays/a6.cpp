#include<iostream>
using namespace std;

void unique(int arr[],int n){
    cout<<"unique elements are "<<endl;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;

            }
        }
        if(count==1){
            cout<<arr[i]<<endl;
        }
    }
    return;
}

int main(){
    int arr[]={18,5,11,3,1,5};
    int n=6;
    unique(arr,n);
}