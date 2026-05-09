//reverse a number and if ans is outside the integer range then print 0
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"enter n ";
    cin>>n;
    while(n!=0){
        if(ans<INT_MIN/10||ans>INT_MAX/10){
            cout<<"0" ;
        }
     ans=(ans*10)+(n%10);  
     n=n/10;
    }
    cout<<"reverse is "<<ans;
}