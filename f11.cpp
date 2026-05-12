#include<iostream>
#include<math.h>
using namespace std;

void powoftwo(int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(n==pow(2,i)){
            flag=1;
            break;
        }
    }
    if(flag==1){
    cout<<"power of 2";
    }
    else
    cout<<"not power of 2";
}



int main(){
    int n;
    cout<<"enter an integer ";
    cin>>n;
    powoftwo(n);
}
    
    

