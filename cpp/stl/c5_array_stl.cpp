#include<bits/stdc++.h>
using namespace std;



int main(){
  //to create a stl array similar like normal array fixed in size , contaguous memory location
  array<int,4> a ={1,5,3,4};
  //to print first element
  cout<<a.front()<<endl;
  //to print last element
  cout<<a.back()<<endl;
  //to check whether array is empty or not
  cout<<a.empty()<<endl;
  // to know total element present in array
  cout<<a.size()<<endl;

  for(int i=0 ; i<a.size() ;i++){
    cout<<a[i];
  }



}