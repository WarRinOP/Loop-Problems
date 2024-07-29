#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter pattern size: ";
    cin>>n;
    while(n%2==0){
        cout<<"Please enter odd number only: ";
        cin>>n;
    }
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==(n/2)+1 || col==(n/2)+1){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}