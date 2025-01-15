#include<bits/stdc++.h>
using namespace std;


int main(){
  list<int> l ;
  l.push_back(1);
  l.push_front(2);
  l.emplace_back(3);
  for(int i : l ){
    cout<<i<<" ";
  }
  cout<<endl;

  //lets try erase 
  // remember we can't just delete element after begin by begin +1 because now the location is stored in nodes unlike deque 

  l.erase(l.begin());

   for(int i : l ){
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<l.size()<<endl;
  l.pop_back();
  cout<<l.size()<<endl;
  cout<<l.front();
  cout<<l.back()<<endl;

  list<string> s = {"kunal ", "jhansi ", "kumar "};
  for(string i : s){
    cout<<i<<endl;
  }
  cout<<s.back();
  cout<<s.front();
  
  




}
