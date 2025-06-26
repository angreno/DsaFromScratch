#include<iostream>
using namespace std;

int main(){
  int n =436;
  int rev =0;
  while(n>0){
    //extract last digit 
    int last = n%10;
    //reverse the number 
    //in iteration 0 we'll get 6 then rev = 6 . then we'll get 3 so 6*10 = 63 . and so on .
    rev = rev*10 + last;

    n = n/10;

  }
  cout<<rev;
}