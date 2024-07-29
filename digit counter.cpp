#include<iostream>
using namespace std;
int main ()
{
    int counter=0,n;
    cout<<"Enter your number: ";
    cin>>n;
    while(n>0){ 
        counter++;
        n/=10; 
        
    }
    cout<<counter;
}