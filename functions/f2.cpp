#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
    ans*=i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    cout<<"the factorial is "<<fact(n);

}