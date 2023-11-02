//check the given no. is member of fibonacci series or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
    if(a<=n){
        c=a+b;
        a=b;
        b=c;
    }
    }
    if(a==n){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}