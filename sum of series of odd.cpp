#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"1+3+5+7....."<<endl;
    cout<<"Enter last digit: ";
    
    cin>>n;
    for(int i=1; i<=n;i=i+2){
        sum=sum+i;
    }
    cout<<sum;
    

}