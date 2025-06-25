#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {0,2,1,0,0,0};
  int zeroc = 0;
  int onec = 0;
  int twoc  = 0;
  //count 0
  for(int i = 0 ; i<6; i++){
    if(arr[i] == 0){
      zeroc++;
    }

  }
  //count 1 
  for(int i =0 ; i<6 ; i++){
    if(arr[i] == 1){
      onec++;
    }
  }
  //count 2
  for(int i =0 ; i<6;i++){
        if(arr[i] == 2){
      twoc++;
    }
  }
  cout<<twoc<<endl;
  //printing all element
  vector <int> a ;
  for(int i =0 ; i<zeroc ;i++){
    a.push_back(0);
  }
  for(int i =0 ; i<onec ; i++){
    a.push_back(1);
  }
  for(int i =0 ; i<twoc;i++){
    a.push_back(2);
  }
  for(int i =0 ;i<a.size() ; i++){
    cout<<a[i];
  }
}