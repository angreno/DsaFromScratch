#include<bits/stdc++.h>
using namespace std;

int main(){
  stack<string> s ;
  //remember we cannot quickly initialize stack unlike other such as { kunal , jhansi } or (4, kunal ) because it is supposed to stored one by one or simply it doesn't supports

  s.push("kunal");
  s.emplace("ok");
  s.push("jhansi ");
  s.push("babbar");
  s.push("azam");
  int j = s.size();
  while(j != 0){
    cout<<s.top()<<" ";
    s.pop();
    --j;
  }
  /* other way 
  while(! s.empty()){
  cout<<s.top();
  s.pop();
  }*/



}