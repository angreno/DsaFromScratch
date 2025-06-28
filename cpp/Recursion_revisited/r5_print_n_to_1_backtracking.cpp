#include<iostream>
using namespace std;
void print(int i,int k){
  if(i == 6){
    return ;

  }
  print(i=i+1,6);
  cout<<i<<endl;


}

int main(){
  print(0,6);

}