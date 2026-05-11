#include<iostream>
using namespace std;

void fibo(int n){
    if(n==0){ 
    cout<<"0";
    return;}
    
    if(n==1){ 
    cout<<"1";
    return;}
    
    int a=0;
    int b=1;
    int c;
    
    for(int i=1;i<n;i++){
    c=a+b;
    a=b;
    b=c;
    }
    cout<<c;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    fibo(n);
}