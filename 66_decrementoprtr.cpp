#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<a--<<endl;  //5
    cout<<--a<<endl;  //3

    int d = a-- + --a; //4
    cout<<d<<endl;
}