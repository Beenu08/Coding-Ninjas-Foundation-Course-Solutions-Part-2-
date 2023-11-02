//check number is prime or not
#include<iostream>
using namespace std;
bool check(int n){
    for(int i=2;i<n;i++){
        if(n>i){
        if(n%i==0){
            return false;
        }
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    // bool p= check(n);
    // cout<<p<<endl;
    for(int i=2;i<n;i++){
        if(check(i))
        cout<<i<<endl;
    }
    return 0;
}