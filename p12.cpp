#include<iostream>
using namespace std;
int main(){
    int n,f=0;
    cout<<"enter the number";
    cin>>n;
    int i=2;
    while(i!=n){
        if(n%i==0)
        f++;
        i++;
    }
    if(f==0)
    cout<<"prime";
    else
    cout<<"not prime";
}