#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter n ";
    cin>>n;
    int i=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"the sum is "<<sum;
