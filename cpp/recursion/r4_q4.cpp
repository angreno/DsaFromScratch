#include<bits/stdc++.h>
using namespace std;
void p(int n){
  if(n==0){
    return ;
  }
  
  //
  n--;
  p(n);
  cout<<n;
}

int main(){
  p(5);
}