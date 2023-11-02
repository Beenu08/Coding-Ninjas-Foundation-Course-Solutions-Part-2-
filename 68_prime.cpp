// wap to check entered number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool divided=false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
        divided=true;
        }
    }
    if(divided)
    {
    cout<<"Non-Prime";
    }
    else{
    cout<<"Prime";
    }
}