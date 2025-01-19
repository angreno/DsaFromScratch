#include<bits/stdc++.h>
using namespace std;
void p(int n){
  if(n==0){
    return ;
  }
  
  cout<<n;
  n--;
  p(n);
}

int main(){
  p(5);
}