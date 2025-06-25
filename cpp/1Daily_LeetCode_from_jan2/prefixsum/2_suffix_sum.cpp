#include<bits/stdc++.h>
using namespace std;

int main(){
  int a =0;
  int prefix = 0;
  int arr []={1,2,4,5,-66,7,7,7,34};
  for (int i =8 ;i>=0;i-- ){
    
    arr[i] = prefix +arr[i]; 
    prefix = arr[i];
  }
  for(int i =0 ; i<9 ; i++){
    cout<<arr[i]<<" ";
  }
  for(int i =0 ; i<8 ; i++){
    if(arr[i]> a){
      a= arr[i];
    }
  }
  cout<<"largest element "<<a;

  //what is prefix sum
  // sum of (i-1) +a[i] ie current element . or we can say that prefix sum is sum of element of arr from 0 to i
}