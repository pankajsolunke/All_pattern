#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
 //   int a1=1;
    while(row <= n){
     int col=1;
     while(col<=row){
      cout<<"*";
     // a1=a1+1;
      col=col+1;
     }
     cout<<endl;
     row=row+1;
    }
}
