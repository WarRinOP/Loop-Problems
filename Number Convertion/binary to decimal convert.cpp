#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter your binary number: ";
    cin>>n;
   int last=0,pow=1;
    while(n>0){
        last=n%2;
     sum+=last*pow;
     pow*=2;
     n=n/10;        
    }
    cout<<"Decimal is: "<<sum;
}