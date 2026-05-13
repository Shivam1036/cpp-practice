#include<iostream>
using namespace std;

int main(){
    int arr[]={2,11,15,7};
    int target=9;
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
        sum=arr[i]+arr[j];
        if(sum==target){
            cout<<i<<" "<<j;
            break;
        }
        }
    }
    return 0;
}