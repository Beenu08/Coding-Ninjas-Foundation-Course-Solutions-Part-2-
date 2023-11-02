#include<iostream>
using namespace std;

int main(){
    
int n;
cin>>n;
int count=1,num;
int max = INT32_MIN, secmax=INT32_MIN;
while(count<=n)
{
    cin>>num;
    if(num>max)
    {
        secmax=max;
        max=num;
    }
    else if(num > secmax && num!=max)
    {
        secmax=num;
    }
    count++;
}
cout<<"SEcond MAx="<<secmax;
}


