#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[8] = {1,2,3,4,5,8,10,2};
  int window_size = 4;
  int n = 8;
  int i =0 , j=0 ,sum =0 , max_sum = 0;
  while(j<n-1){
    if(j-i+1 ==  window_size){  
      for(int p = i ; p<=j; p++){
         //to calculate sum n
        sum =sum+arr[p];
        cout<<arr[p]<<" ";
      }
      cout<<sum;
      sum=0;
      i++;
      cout<<endl;
    }
      if(sum>max_sum){
        max_sum= sum;
      }
    j++;
  }
  
}

//window size calculation j-1+1
//i will be fixed till we reach our window size 
//lets suppose we have window size == 3 . 
// we will increament j till we reach our desired window 