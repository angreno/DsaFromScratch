#include<bits/stdc++.h>
using namespace std;
//pass by value will increase memory usage so thats will use pass by reference  and since we are using pass by reference our return type will be void .

void rev(vector<int>  &k, int l , int r){
  if(l>=r){
    return  ;
  }
  swap(k[l],k[r]);
  rev(k,l+1,r-1);

}


int main(){
  vector<int> k = {1,2,4,6};
  int l=0;
  int r = k.size()-1;


  rev(k  , l , r);
  for (int i : k) {
        cout << i << " ";
    }



}