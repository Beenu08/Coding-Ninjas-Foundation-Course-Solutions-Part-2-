#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dec=0,i=0;
    cin>>n;

    while(n!=0)
    {
        int r=n%10;
        int p=r*pow(2,i);
        i++;
        dec=dec+p;
        n=n/10;
    }
    cout<<dec<<endl;
}