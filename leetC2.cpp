//count 1 bits
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter n ";
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
   cout<<"number of 1 bits are "<<count;
}