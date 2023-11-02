/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int star=1;
        while(star<=2*i-2){
            cout<<"*";
            star++;
        }
        int k=n-i+1;
        while(k>=1){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
}