#include<iostream>
using namespace std;
int main(){
    int n,f,l,sum=0;
    cout<<"enter a six digit number";
    cin>>n;
    f=n/100000;
    l=n%10;
    sum=f+l;
    cout<<"sum of first and last digit is "<<sum;
}