#include<iostream>
using namespace std;

int fact(int n){
int factorial=1;
for(int i=1;i<=n;i++){
factorial*=i;
}
return factorial;
}

int ncr(int n, int r){
    int result;
     result=fact(n)/(fact(r)*fact((n-r)));
return result;
}

int main(){
    int n,r;
    cout<<"enter n and r ";
    cin>>n>>r;
    cout<<"the binomial coefficient is "<<ncr(n,r);
}