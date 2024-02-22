#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    //int a1=1;
    char a='A';
    while(row <= n){
     int col=1;
     //char a1='A';
     while(col<=row){
      cout<<a;
      cout<<a+1;
      col=col+1;
     }
     cout<<endl;
     row=row+1;
    }
}
