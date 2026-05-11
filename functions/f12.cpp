#include<iostream>
//#include<math.h>
using namespace std;

void powoftwo(int n){
    if(n<=0)
    cout<<"invalid";
     if((n&(n-1))==0)
    cout<<"is power of 2";
}



int main(){
    int n;
    cout<<"enter an integer ";
    cin>>n;
    powoftwo(n);
}
    
    

