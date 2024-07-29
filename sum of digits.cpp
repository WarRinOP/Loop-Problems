#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter your digit: ";
    cin>>n;
    while(n>0)
    {
        
        sum= sum + n%10;
        n/=10;
    }
    cout<<sum;
}