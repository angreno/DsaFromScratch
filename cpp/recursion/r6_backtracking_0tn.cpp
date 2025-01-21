#include<iostream>
using namespace std;
void p(int i,int j){
  if(i>j){
    return ;
  } 
  p(i+1,j);
  cout<<i;

}
int main(){
  p(1,4);
}