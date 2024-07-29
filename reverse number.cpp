#include<iostream>
using namespace std;
int main()
{
    int num,rev,rem;
    cout<<"Enter your digit: ";
    cin>>num;
    for(rev=0; num!=0; ) {
    rem= num%10;
    rev= rev*10+rem;
    num/=10;
    }
    cout<<"Reverse of the digit is: " <<rev;

}