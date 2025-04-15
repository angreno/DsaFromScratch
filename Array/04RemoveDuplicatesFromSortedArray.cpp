#include<bits/stdc++.h>
using namespace std ;

int main(){
  int arr[10]={0,0,1,1,1,2,2,3,3,4};
  int j =0 ;
  int k =0;
  for (int i =0 ; i<=9 ; i++){
    k+=1;
    if(arr[i] != arr[k]){
      arr[j]=arr[i];
      j+=1;

    }
  }
  for(int i =0 ; i<9 ;i++){
    cout<<arr[i];
  }
} 