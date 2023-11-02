/*Code Insertion Sort
Send Feedback
Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
 Note:
Change in the input array/list itself. You don't need to return or print the elements.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the elements of the array/list in sorted order separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec
Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Sample Input 2:
2
5
9 3 6 2 0
4
4 3 2 1
Sample Output 2:
0 2 3 6 9
1 2 3 4 
*/
//Ist Code****************************************//
// #include<iostream>
// using namespace std;
// void insertion_sort(int A[] , int n){
//     for(int i=0;i<n-1;i++){
//         int current = A[i],j;
//         for(j=i-1;j>=0;j--){
//         if(current<A[j]){
//             A[j+1]=A[j];
//         }else{
//             break;
//         }
//         }
//         A[j+1]=current;
//     }    
// }
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     insertion_sort(A,n);
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<" ";
//     }
// }

//*********SEcond code****************************
#include<iostream>
using namespace std;

void insertion_sort(int A[],int n){
    for(int i=1;i<n;i++){
        int current=A[i];
        int j=i-1;
        while(current<A[j] && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=current;
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    insertion_sort(A,n);
      for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}




