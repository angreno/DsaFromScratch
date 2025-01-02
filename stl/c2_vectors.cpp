#include<bits/stdc++.h>
using namespace std;

//vectors are dynamic in nature they can expand themselves 
void vectors(){
  //declaration of vectors
  //basically in containers  our declaration syntax goes as follow
  // container type  <data type > variable name 
  vector <int> s; //creates and empty container
  
  //to add element we use push_back or emplace_back   emplace_back is faster than push_back 
  s.push_back(2);
  s.emplace_back(2);
  cout<<s[1]; 
  vector<pair <int, int>> a;
  a.push_back({2,3});
  a.emplace_back(3,3); //emplace_back (x,y) already assumes this to be pair so we dont need {}

  //to declare vector with size of 5 and instances with garbage value
  vector <int> v(5);
  cout<<v[0]<<endl;

  // to declare vector with size of 4 and instances with 200 value
  vector <int> v2(4,200);
  cout<<"here we go , vector with size of 4 with instances of 200"<<endl;
  cout<<v2[3]<<endl;
  //what if we want to declare a vector v3 who has instance of v2 
  vector<int> v3(v2);
  cout<<"element available in v3 at 3 index  is same as element at v2 and the element is  "<<v3[3];
}


int main(){
  vectors();
  return 0;
}
