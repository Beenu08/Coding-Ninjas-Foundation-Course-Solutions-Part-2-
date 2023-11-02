#include<iostream>
using namespace std;
int main()
{
    char c;
    c=cin.get();
    int count=0,num=0,al=0,sp=0;

    while(c!='$')
    {
        
        if(c>='a' && c<='z')
        {
            al++;
        }
        else if(c>='0' && c<='9')
        {
            num++;
        }
        else 
        sp++;
        //count++;
        c= cin.get();
    }
    
    cout<<"Total alphabets:"<<al<<endl;
    cout<<"Total integers:"<<num<<endl;
    cout<<"Toatl special char:"<<sp<<endl;
}