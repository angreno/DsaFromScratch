#include<bits/stdc++.h>

using namespace std;


int main(){
  vector <int> arr = {13,46,24,52,20,9};
  
  //selection sort
  cout<<arr.size()<<endl;
  int j = 0;
  for(int i =0; i<=arr.size()-1;i++){
    int min = i;
    for(int j =i+1 ; j<=arr.size()-1;j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    int temp=arr[i];
    arr[i] = arr[min];
    arr[min] =temp;
    

  }
      for(int i =0;i<arr.size() ; i++){
      cout<<arr[i]<<" ";
    }
}
//time complexity 
// O(n2)
