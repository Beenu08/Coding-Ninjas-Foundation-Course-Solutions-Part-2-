#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;count<=n;i++)
    {
        int f=3*i+2;
        if(f%4==0)
        {
            continue;
        }
        cout<<f<<" ";
        count++;
    }
}