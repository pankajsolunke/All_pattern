#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
//    int count=1;
   // int a1=1;
    int s=n-row;
    while(row <= n){
     int col=1;
     while(s){
       cout<<" ";
       s=s+1;
     }
     while(col<=row){
 //     char ch='A'+a1-1;
   //   cout<<ch;
     // a1=a1+1;
        int count=1;
        cout<<count;
        count=count+1;
      col=col+1;
     }
     cout<<endl;
     row=row+1;
    }
}
