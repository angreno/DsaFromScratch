#include<bits/stdc++.h>
using namespace std;

int main(){

  priority_queue<int > max ;

  max.push(2);
  max.push(3);
  max.push(4);
  max.push(20);
  max.push(1);

  // the largest will be given priority
  while(!max.empty()){
    cout<<max.top()<<" ";
    max.pop();

  }
  cout<<endl;

  //min heap
  priority_queue<int, vector<int> , greater<int> > min ;
  min.push(3);
  min.push(0);
  min.emplace(6);
  min.emplace(3);
  int a = min.size();
  for(int i =0 ; i<a ; i++){
    cout<<min.top();
    min.pop();

  }
  cout<<endl;


  






}