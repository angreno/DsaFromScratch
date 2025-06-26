#include<bits/stdc++.h>
using namespace std;

int main() {
  int arr [5] = {5,3,4,1,2};
  int n = 5;
  //insertion sort implementation 
  for(int i =0 ;i<n;i++){
    int j = i ;
    while(j>0 && arr[j-1] > arr[j]){
      int temp = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }

for(int i =0 ; i<5 ; i++){
  cout<<arr[i]<<endl;
  }
}