#include<bits/stdc++.h>
using namespace std;

int main(){
  int prefix = 0;
  int arr []={1,2,4,5,6,7,7,7,34};
  for (int i =0 ;i<9;i++ ){
    
    arr[i] = prefix +arr[i]; 
    prefix = arr[i];
  }
  for(int i =0 ; i<9 ; i++){
    cout<<arr[i]<<" ";
  }
  //what is prefix sum
  // sum of (i-1) +a[i] ie current element . or we can say that prefix sum is sum of element of arr from 0 to i
}