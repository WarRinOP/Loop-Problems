#include<iostream>
using namespace std;
int main(){
    int n,m,row,col;
    cout<<"Enter pattern row: ";
    cin>>n;
    cout<<"Enter pattern column: ";
    cin>>m;
    for(row=1;row<=n;row++){
        for(col=1;col<=m;col++){
            if((row+col)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<"\n";
    }
}