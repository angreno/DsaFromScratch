#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[8] = {1,2,3,4,5,8,10,2};
  int window_size = 4;
  int n = 8;
  int i =0 , j=0 ;
  while(j<=n){
    for(int k =i ; k<=j ; k++){
      cout<<arr[k]<<" ";
      i++;
    }
    cout<<endl;
    j++;
  }

}