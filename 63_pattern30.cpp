//diamond pattern
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1,n1=n/2+1,n2=n/2;
    while(i<=n1)
    {
       int s=1;
       while(s<=n1-i)
       {
           cout<<" ";
           s++;
       }
       int j=1;
       while(j<=2*i-1)
       {
           cout<<"*";
           j++;
       }
       cout<<endl;
    i++;
    }
    int k=n2;
    while(k>=1)
    {
        int sp=1;
        while(sp<=n2-k+1)
            {
            cout<<" ";
            sp++;
        }
        int p=1;
        while(p<=2*k-1)
        {
            cout<<"*";
            p++;
        }
        k--;
        cout<<endl;
    }
    
}   