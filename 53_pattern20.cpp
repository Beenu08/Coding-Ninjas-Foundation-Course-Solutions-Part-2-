//character pattern
/*
A
BC
CDE
DEFG
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
        int j=1;
        char k='A'+i-1;
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;

    }

}