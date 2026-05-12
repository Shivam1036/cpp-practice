#include<iostream>
using namespace std;
void sumandproduct(int arr[],int size){
    int sum=0,product=1,i=0;
    while(i<size){
        sum+=arr[i];
        product*=arr[i];
        i++;
    }
cout<<" sum is "<<sum<<endl;
cout<<" product is "<<product<<endl;


}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    sumandproduct(arr,size);
}