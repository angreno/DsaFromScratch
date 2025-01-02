#include<bits/stdc++.h>
using namespace std;

void p(){
  vector <int> k;
  //lets fill vector till 10
  for(int i =0 ; i<18 ; i++){
    k.emplace_back(i);
  }

  //to print all elements
  for (vector<int>::iterator it = k.begin() ;it != k.end(); it++ ){


    cout<<*it<<endl;

  }
   for(auto it = k.begin() ; it != k.end() ; it++){
    cout<<*it;
  }
}

//instead of above solution we can direct put datatype as auto in iterator

 





int main(){
  p();
  return 0;
}