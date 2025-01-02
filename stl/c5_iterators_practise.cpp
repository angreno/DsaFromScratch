#include<bits/stdc++.h>
using namespace std;

void p(){
  vector <int> k;
  //lets fill vector till 10
  for(int i =0 ; i<18 ; i++){
    k.emplace_back(i);
  }

  //to print all elements
  vector<int> :: iterator it ;
  for (int i = *k.begin() ; *k.begin()!=k.back() ; *k.begin()++){

    cout<<*k.begin();

  }
}





int main(){
  p();
  return 0;
}