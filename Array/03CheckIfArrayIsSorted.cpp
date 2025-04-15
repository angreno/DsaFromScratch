#include<bits/stdc++.h>
using namespace std ;

int main(){
  int arr[4]={1,2,2,4};
  bool a = true;
  for(int i =0 ; i<3 ; i++){
    if(arr[i] > arr[i+1]){
      a= false;
      break;
    }
  }
  cout<<a;
} 