#include<iostream>
using namespace std;
int main()
{
    int n,choice,sum=0,product=1,result;
    cout<<"Enter integer: ";
    cin>>n;
    cout<<"enter choice 1 or 2:";
    cin>>choice;

    if(choice==1)
    {
        for(int i=1;i<=n;i++)
        {
        sum=sum+i;
        result=sum;
        }
        cout<<result<<endl;
    }
    else if(choice==2)
    {
        for(int i=1;i<=n;i++)
        {
           product=product*i;
           result=product;
        }
        cout<<result<<endl;
    }
    
    else 
    cout<<"-1"<<endl;
   // cout<<result<<endl;
}