#include<iostream>
using namespace std;
/*
void  d (int n ,int sum){
  if(n==0){
    cout<< sum;
  }
  d(n-1,sum+=n);
  

}
*/

//functional way to solve this question which is without any extra parameter
int j (int n){
  if(n<0){
    return 0;
  }
  return n + j(n-1);
}

int main(){
  //d(3,0);
  cout<<j(0);

}