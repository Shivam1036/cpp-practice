#include<iostream>
#include<math.h>
using namespace std;

void deciTObin(int n){
int ans=0,bit;
int i=0;
while(n!=0){
    int bit=n%2;
    ans=(pow(10,i)*bit)+ans;
   n=n/2;
   i++;
}
cout<<ans;
}

int main(){
    int n;
    cout<<"enter a decimal number ";
    cin>>n;
    cout<<"the binary is ";
    deciTObin(n);

}