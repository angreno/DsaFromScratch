#include<bits/stdc++.h>
using namespace std;

void rev(int arr [],int j,int n){
  if(j>=n){
    return ;
  }
  swap(arr[j],arr[n]);
  rev(arr,j+1,n-1);
} 



int main(){
  int arr[] = {69, 87, 45, 21, 47};
  int j = 0;
  rev(arr , j,4);
  for(int i =0 ;i<5;i++){
    cout<<arr[i]<<" ";
  }

 }