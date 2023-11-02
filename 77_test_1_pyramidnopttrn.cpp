/*
n=4
   1
  212
 32123
4321234
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int sp=1;
        while(sp<=n-i)
        {
            cout<<" ";
            sp++;
        }
        int j=i;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        int k=1;
        //int p=2;
        while(k<=i-1)
        {
            cout<<k+1;
            k++;
           // p++;
        }
        cout<<endl;
        i++;
    }
    
}   