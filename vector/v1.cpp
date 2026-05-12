#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;//={1,2,3,4,5,6};
    int n;
    cout<<"enter size of vector ";
    cin>>n;
   cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"entered elements are"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}