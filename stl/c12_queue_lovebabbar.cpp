#include<bits/stdc++.h>
using namespace std;

int main(){
  queue<int> q;
  q.emplace(2);
  q.push(3);
  q.emplace(5);
  cout<<"first element before pop"<<q.front()<<endl;
  q.pop();
  cout<<"first element after pop"<<q.front()<<endl; 
  cout<<q.size();
  cout<<q.front();
  





}