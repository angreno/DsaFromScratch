#include<iostream>
using namespace std;

void k(int i , int j ){
  if(i>j){
    return ;
  }
  cout<<i;
  i++;
  k(i,j);
}



int main(){
  int i=1;
  k(i,4);

}