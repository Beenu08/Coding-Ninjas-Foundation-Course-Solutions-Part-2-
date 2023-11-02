//wap to find the length of string
#include<iostream>
using namespace std;
int find_length(char c[]){
    int count =0;
    for(int i=0;c[i]!='\0';c++){
        count++;
    }
    return count;
}
int main(){
    char c[100];
    cout<<"Enter character:";
    cin>>c;
    cout<<"Length is:"<<find_length(c)<<endl;;
}