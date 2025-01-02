#include<bits/stdc++.h>
using namespace std;

void p(){
  // declaration of pair  
  //pair<datatype1 , data type2 > variable name 
  pair<int,int> k ;
  k = {1,2};
  cout<<k.first<<endl;
  cout<<k.second<<endl;
  pair<int , char> e;
  e ={1,'k'};
  cout<<e.first<<e.second<<endl;

  //pair of pair
  pair<int,pair <int, char>> j;
  j={1,{1,'k'}};
  cout<<j.first<<j.second.first<<j.second.second<<endl;

  //array of pair
  pair <int,int> arr[] = {{1,2},{3,4}};
  cout<<arr[0].first<<endl;

  //vectors 
  // syntax vector <data type > variable name 
  // so basically in containers our general syntax will we 
  // container such as pair or vector then <data type > then variable name .

  cout<<"now we are going to see vector "<<endl;
  vector <int> vec;
  vec.push_back(2);
  cout<<vec[0];

  vector< pair <int,int> > v;

  vector <int> a(1,200);
  cout<<a[0];
  



}



int main(){
  
p();
return 0;
}