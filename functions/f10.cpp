#include<iostream>
#include<math.h>
using namespace std;

void reverse(int n){
    int rev=0;
    while(n!=0){
        rev=(rev*10)+(n%10);
        n/=10;
    }
    cout<<rev;
}

int main(){
    int n;
    cout<<"enter an integer ";
    cin>>n;
    cout<<"the reverse of the integer is ";
    reverse(n);
}
    
    

