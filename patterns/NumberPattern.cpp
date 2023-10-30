#include<iostream>
using namespace std; 

int main(){
    int numberofRows;
    cin>>numberofRows;
    int numberofCols=1;
    for(int i=1;i<=numberofRows;i++){
          for(int j=1;j<=numberofRows-i;j++)
          cout<<" ";
          for(int k=1,j=i;k<=i;k++,j++){
             cout<<j;
          }
          cout<<"\n";

    }
return 0;
}