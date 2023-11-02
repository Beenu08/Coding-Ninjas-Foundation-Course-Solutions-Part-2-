//Input ur name
#include<iostream>
using namespace std;
int main(){
    char c[1000];
    cout<<"Enter name:";
    cin>>c;//abc
    c[4]='x';  //abc
    c[3]='d'; //abcdx
    c[1]'\0';  //a
    cout<<"NAme:"<<c<<endl;
}