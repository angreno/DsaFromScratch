#include<iostream>

using namespace std;
void name(int k ,int i){
  if(k>i){
    return;
  }
  cout<<"kunal"<<k<<endl;
  name(k+1,i);

}


int main(){
  string n;
  name(0,5);

}