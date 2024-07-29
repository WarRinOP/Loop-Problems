#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter pattern size: ";
cin>>n;
for(row=1;row<=n;row++){
    for(col=1; col<=(n-row);col++){
        cout<<" ";
    }
    for(col=0;col<(2*row-1);col++){
        cout<< (char) ('A'+col); 
    }
    cout<<endl;
}
for(row=1;row<n;row++){
    for(col=1;col<=row;col++){
        cout<<" ";
    }
    for(col=0; col<2*(n-row)-1;col++){
        cout<< (char) ('A'+col);
    }
    cout<<endl;
}
    
}