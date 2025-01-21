#include<iostream>
using namespace std;

void k(int i , int j ){
  if(i<=0){
    return ;
  }
 
 
  //when function get calls first until base condition then executes something then it is known as backtracking.
  k(i-1,j);
  cout<<i;
}



int main(){
  k(4,4);

}