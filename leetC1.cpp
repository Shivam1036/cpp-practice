//subtract the product and sum of sigit of an integer
#include<iostream>
using namespace std;
int main(){
    int n,d=0,p=1,s=0;
    cout<<"enter an integer ";
    cin>>n;
    while(n!=0){
        p*=n%10;
        s+=n%10;
        n=n/10;
    }
    d=p-s;
    cout<<"the difference is "<<d;
}