#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    
cout<<"Enter pattern size: ";
cin>>n;
for(row=1; row<=n;row++){
    for(col=1;col<=(row-1);col++){
        cout<<" ";
    }
    for(col=1; ;col++){
    cout<<"#";
    break; }
    cout<<"\n";
}
}