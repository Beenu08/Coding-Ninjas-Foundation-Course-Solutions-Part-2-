/*
wap to print true iff sequence is strictly increasing or strictly decreasing or 
strictly decreasing then strictly increasing 
else in all casses print false
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int curr,pre;
    cin>>pre;
    bool increase_hogya=false;
    int count=1;
    while(count<=n)
    {
        cin>>curr;
        if(curr==pre)
        {
            cout<<"false";
        }
        else if(curr<pre)
        {
            if(increase_hogya==true)
            {
                cout<<"false";
            }
        }
        else
        increase_hogya=true;
        count++;
        pre=curr;
    }
    cout<<"true";
}