#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,4};
v.insert(2,3);
int i=0;
while(i<3){
    cout<<v[i]<<endl;
    i++;
}
     
//v.insert(v.begin()+2,3);

    return 0;
}