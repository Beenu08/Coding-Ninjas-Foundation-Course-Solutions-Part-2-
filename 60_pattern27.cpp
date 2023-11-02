/*
   1
  121
 12321
1234321
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
        int j=1;
        while(j<=i)
        {
           cout<<j;
           j++;
        }
        int k=1,p=i-1;
        while(k<=i-1)
        {
            cout<<p;
            k++;
            p--;
        }
        cout <<endl;
        i++;
    }
}   