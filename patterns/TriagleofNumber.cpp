#include<iostream>
using namespace std; 

int main(){
    int numberofRows;
    cin>>numberofRows;
    int numberofCols=1;
    for(int i=1;i<=numberofRows;i++){
          int numberofSpaces=numberofRows-i;
          int increasingValueStart=i;
          int decreasingValueStart=((2*i)-2);
          for(int j=1;j<=numberofSpaces;j++)
          cout<<" ";
          for(int j=1;j<=i;j++){
            cout<<increasingValueStart<<" ";
            increasingValueStart++;
          }
          for(int j=1;j<=i-1;j++){
            cout<<decreasingValueStart<<" ";
            decreasingValueStart++;
          }
          cout<<"\n";

    }
return 0;
}