#include<iostream>
using namespace std;
int main(){
    int n,m,i,res=1;
    cout<<"Enter base: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>m;
    for(i=1;i<=m;i++){ 
        res=res*n;
    }
    cout<<res;

}