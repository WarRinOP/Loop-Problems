#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your decimal number: ";
    cin>>n;
    int rem=0;
    int st=0;
    while(n>0){ //n=15
        rem= n%2; //1
        st=st*10+rem;//
        n/=2;
    }
    int reverse=0, store=0;
    while(st>0){  //1010
        store=st%10; //0
        reverse= reverse*10+store; 
        st/=10;

    }
    cout<<reverse;
}