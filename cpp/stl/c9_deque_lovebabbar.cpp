#include<bits/stdc++.h>
using namespace std;

int main(){

  //declaration
  deque<int> a = {3,2,4};
  a.push_back(5);
  cout<<a.back();
  cout<<"before push front element at  0th index is"<<a.at(0)<<endl;
  a.push_front(1);

  cout<<"after push front element at  0th index is "<<a[0];
  a.pop_front();
  cout<<"element at 0th index after pop is "<<a[0]<<endl;


  cout<<"lets iterate"<<endl;
  for(int i : a){
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<a.back()<<endl;
  cout<<a.front()<<endl;
  cout<<a.empty()<<endl;

  //lets try erase function
  cout<<"before erase function size"<<a.size()<<endl;
  a.erase(a.begin(),a.begin()+1);
  cout<<"after erase function size"<<a.size()<<endl;

  //lets try to empty container

  cout<<"lets empty container "<<endl;
  a.clear();
  cout<<a.size();
  cout<<a[4]<<endl;
  
  deque<int> d = {4,2,3,4};
  cout<<d.front();

  



}