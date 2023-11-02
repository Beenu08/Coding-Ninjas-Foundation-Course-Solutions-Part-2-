/*
Selection Sort 
n no. of elemnts
n-1 are passes
for example elemnts are ;
//  elemnts: 5 3 8 1 7
//  PAss 1:  1 3 8 5 7
//  Pass 2:  1 3 8 5 7
//  pass 3:  1 3 5 8 7
//  pass 4:  1 3 5 7 8
//  */
#include<iostream>
using namespace std;
void Selection_sorting(int A[], int n){
    for(int i=0;i<n-1;i++){
        int min=A[i], minindex=i; 
        //Find minimum element       
        for(int j=i+1;j<n;j++){
            if(min>A[j]){
                min=A[j];
                minindex=j;
            }
        }
        //swap
            int temp=A[i];
            A[i]=A[minindex];
            A[minindex]=temp;    
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter elemnts:";
    cin>>n;
    int A[n];
    cout<<"Enter elments:"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    Selection_sorting(A,n);
}

