#include<iostream>
using namespace std;

void checkprime(int n){
int flag=0;
 if(n<=1){
        cout<<"not prime";
        return;
    }

for(int i=2;i*i<=n;i++){
    if(n%i==0)
    flag=1;
}
if(flag==0)
cout<<"is prime";
else 
cout<<"not prime";
return;
}


int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    checkprime(n);
}