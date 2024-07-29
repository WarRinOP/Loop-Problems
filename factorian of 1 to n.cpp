#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"Enter last digit: ";
    cin>>n;
     cout<<"Factorial of 1 to "<<n <<" is: "<<endl;
    for(i=1;i<=n;i++){
        fact*=i;
        cout<<fact<<endl;
    }
   cout<<fact;
}