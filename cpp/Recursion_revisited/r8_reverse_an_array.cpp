#include<bits/stdc++.h>
using namespace std;



int main(){
  vector<int> arr ={1,2,3,4};
  for(int i =0 ; i<3;i++){
    int temp = arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
  for(int i =0;i<=3;i++){
    cout<<arr[i];
  }


}