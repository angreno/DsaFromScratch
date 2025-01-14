#include<bits/stdc++.h>
using namespace std;

int main(){
  //declaration
  vector < int > a ;
  cout<<a.capacity();
  a.push_back(2);
  cout<<a.capacity();
  a.emplace_back(3);
  cout<<"\n"<<a.capacity();
  a.emplace_back(4);
  cout<<"\n"<<a.capacity();



  cout<<"the total element present in vector "<<a.size();

  cout<<"\n"<<"before pop"<<endl;
  for(int i : a){
    cout<<i<<" ";
  }
  cout<<endl;
  a.pop_back();

  
  cout<<"after pop"<<endl;
  for(int i : a){
    cout<<i<<" ";

   

  }
  cout<<endl;

   //other quick way to initialize
    vector<int> b(5,1);
    for(int i : b){
      cout<<i<<" ";
    }
    cout<<endl;

    vector<int> c(a);
     for(int i : c){
      cout<<i<<" ";
    }
    cout<<endl;

    

  
 



   


}