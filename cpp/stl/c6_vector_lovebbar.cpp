#include<bits/stdc++.h>
using namespace std;

int main(){
  vector <int> k ;
  //to check capacity i.e allocated size in memory to vector
  cout<<k.capacity()<<endl;
  // to add element in vector
  k.push_back(5);
  cout<<k.capacity()<<endl;
  cout<<"size"<<k.size();
  k.push_back (6);
  k.push_back(7);

  cout<<"capacity"<<k.capacity()<<endl;
  cout<<k.size()<<endl;
  //by this we can notice that vector  keeps increasing its capacity

  cout<<k.front()<<endl;


  //to remove element from last
  cout<<k.back()<<endl;
  k.pop_back();
  cout<<k.back()<<endl;

  // to clear elements present in vector
  // note this will only clear size . the memory assigned will be same i.e capacity
  k.clear();
  cout<<"so the size of vector is"<<k.size();
  cout<<k.capacity();



}