#include<iostream>
using namespace std;

int main(){
    int n,rev=0;
    cout<<"enter a umber ";
    cin>>n;
    while(n!=0){
        rev=(rev*10)+(n%10);
        n/=10;
    }
    if(rev==n){
        cout<<"true";
    }
    else
    cout<<"false";
    return 0;
}