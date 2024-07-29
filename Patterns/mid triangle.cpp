#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter pattern size: ";
    cin>>n;

    for(row=1; row<=n; row++){ // For rows
        for(col=1; col<=(n-row);col++){ // For spaces
            cout<<" "; }
            for(col=1; col<=(2*row)-1;col++) { // For printing #
                cout<<"#";
            }
            cout<<"\n"; // For going to next line
        
    }
}