// an array is formed by middle elements of original array.
// given array formed using middle elements of original array
//return original array
//3,4,2,5,1,6 input
//1,2,3,4,5,6 output


#include<iostream>
using namespace std;

int main(){
    int inputArray[2]={1,2};
    int n=2;
    int outputArray[2];
    int i=0,j=n-1;
    int ptr1=n-1,ptr2=n-2;
    while(i<=j&&(ptr1>=0||ptr2>=0)) {
        if(ptr2>=0)
        outputArray[i] =inputArray[ptr2];
        if(ptr1>=0)
        outputArray[j] =inputArray[ptr1];
        i++,j--;
        ptr1-=2;
        ptr2-=2;
    }
   for(int i=0;i<n;i++) {
    cout<<outputArray[i]<<" ";
   }
    return 0;
}