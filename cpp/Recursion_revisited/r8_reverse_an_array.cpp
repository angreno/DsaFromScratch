#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>arr ,int i,int n){
  if(i>n){
    for(int i =0;i<=3;i++){
      cout<<arr[i]<<endl;
  }

    return;
  }
  int temp = arr[i];
  arr[i]=arr[n];
  arr[n]=temp;
  rev(arr,i+1,n-1);
}


int main(){
  vector<int> arr ={1,2,3,4};
  cout<<"Hii"<<endl;
  rev(arr,0,3);
  for(int i =0;i<=3;i++){
    cout<<arr[i];
  }


}