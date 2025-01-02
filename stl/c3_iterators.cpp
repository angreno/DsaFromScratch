#include<bits/stdc++.h>
using namespace std;

void t(){
  //every container has its own iterator so syntax goes as follow
  // container<data type > :: iterator iterator name = variable. function
  // what is iterator then ?
  // iterator basically points out memory address of the instance

  vector<int> k ;
  k.emplace_back (2);
  k.emplace_back(5);
  k.emplace_back(6);
  for (int i =0 ; i<10 ; i++){
    if(i<100){
      k.emplace_back(i);
    }
  }
  
  vector<int>::iterator it = k.begin();
  vector <int>::iterator ib = k.end();
  cout<<"this is the last element of vector"<<*ib<<endl;
    while(it != ib){
    vector<int> ::iterator c  = k.begin();
    cout<<*it<<endl;
    it++;
    }
  
}
void j(){
  vector <int> k;
  k.emplace_back(4);
  k.emplace_back(3);
  //it.end point out the memory location of instance that is just after it
  vector<int>::iterator it = k.end();
  //so to get last element we do -1
  it=it-1;
  cout<<*it<<endl;
  cout<<k.back();
  cout<<*k.end();
  cout<<*k.begin();

}

  


int main(){
  j();
  return 0;

}
