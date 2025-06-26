#include<bits/stdc++.h>
using namespace std;

int main() {
  int arr [5] = {5,3,4,1,2};
  int n = 5;
  //insertion sort implementation 
  for(int i =1 ;i<n;i++){
    
    int element = arr[i];
     
    for(int j = i-1 ; j>=0 ; j--){
      if(element < arr[j]){
        arr[j+1] = arr[j];

      }

    }
  }

for(int i =0 ; i<5 ; i++){
  cout<<arr[i]<<endl;
  }
}