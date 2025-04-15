#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[6] = {1,2,4,7,7,5};
  int l2 ,l1 = 0;
  for(int i =0 ; i< 6 ; i++){
    if(arr[i] > l1){

      l2 = l1;
       
      l1 = arr[i];
     

    }
    
    if( l2 < arr[i] && l1 > arr[i]){
       
      l2 = arr[i];
      
    }
  }
  cout<<l2<<endl;
  cout<<l1;
}
