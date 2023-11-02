#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=1,b=0;
    cin>>n;

    while(n!=0)
{
    int r=n%2;
     b=b+r*temp;
    temp=temp*10;
    n=n/2;
}
cout<<b;
}