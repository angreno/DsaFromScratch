#include<bits/stdc++.h>
using namespace std;




// pair stores two values together
// can we store more than two in pair? . the answer is yes we can do it by storing them into nested pairs
void a(){
  pair<int, int>  p  {1,2};
  cout<<"this is first number "<<p.first<<" ,this is second number "<<p.second<<endl;

  //nested pair
  pair <int ,pair<int ,int>> a ={1,{2,3}};
  //this is how nested pair works
  cout<< a.first<<a.second.first<<a.second.second<<endl;

  //lets make array of pair
  pair <int ,int> arr[]= {{1,2},{3,4},{4,5},{5,6}};
  cout<<arr[2].first<<endl;


}


int main(){
  a();
  return 0;
}