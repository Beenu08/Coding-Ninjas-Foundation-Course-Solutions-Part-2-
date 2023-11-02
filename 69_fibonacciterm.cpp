//wap to find nth term of fibonaccie series
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int c,a=0,b=1;
    int i=1;
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<"Nth term of fibonaccie sries is "<<a<<endl;
}