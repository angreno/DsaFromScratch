#include<bits/stdc++.h>
using namespace std;

void t(){
  //every container has its own iterator so syntax goes as follow
  // container<data type > :: iterator iterator name = variable. function

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
  vector<int>::iterator it = k.end();
  cout<<*it-1<<endl;
}
  


int main(){
  j();
  return 0;

}
