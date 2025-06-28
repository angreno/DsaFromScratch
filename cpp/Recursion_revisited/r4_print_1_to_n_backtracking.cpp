#include<iostream>
using namespace std;

void shit(int n ){
  if(n==1){
    return ;
  }
  shit(n=n-1);
  cout<<n;
}

int main(){
shit(6);
}