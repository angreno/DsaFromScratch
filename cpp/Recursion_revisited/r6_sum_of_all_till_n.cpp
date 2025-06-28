#include<iostream>
using namespace std;

void sum(int n,int j){
  if(n==0){
    cout<<j;
    return;
  }
  sum(n=n-1,j+n);
}

int main(){
  int n;
  cin>>n;
  int sum1 = 0 ;
  sum(n,sum1);
}