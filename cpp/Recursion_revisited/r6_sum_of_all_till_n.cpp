#include<iostream>
using namespace std;
//parameterised way 
// void sum(int n,int j){
//   if(n==0){
//     cout<<j;
//     return;
//   }
//   sum(n=n-1,j+n);
// }

//functional way 
int func1(int n){
  if(n==0){
    return 0;
  }
  return n+func1(n-1);

}

int main(){
  int n;
  cin>>n;
  int sum1 = 0 ;
  //sum(n,sum1);
  cout<<func1(n);
}