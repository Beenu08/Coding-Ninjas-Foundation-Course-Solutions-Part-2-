//find ncr
#include<iostream>
using namespace std;
int  print_ncr(int n){
    int i=1,fact=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n= print_ncr(n);
    int fact_r= print_ncr(r);
    int fact_c= print_ncr(n-r);
    cout<<fact_n/(fact_r*fact_c);
    return 0;
}
