/*
   1
  232
 34543
4567654
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
        int s=1;
        while(s<=n-i)
        {
            cout<<" ";
            s++;
        }

        int j=1,val=i;
        while(j<=i)
        {
            cout<<val;
            val++;
            j++;
        }

        int k=1,l=2*i-2;
        while(k<=i-1)
        {
            cout<<l;
            k++;
            l--;
        }
        cout<<endl;
        i++;
    }
}   