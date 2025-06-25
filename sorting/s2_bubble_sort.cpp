#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[4] = {20,4,34,3};
  for(int i =0;i<4;i++){
    for(int j =0;j<4-i-1;j++){
      if(arr[j+1] < arr[j]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

      }
    }
  }

  for(int i =0; i<4 ;i++){
    cout<<arr[i]<<" ";
  }
  
}