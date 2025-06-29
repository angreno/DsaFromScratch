#include<bits/stdc++.h>
using namespace std;
//using single pointer
void rev(vector<int>arr ,int i){
  if(i>=arr.size()/2){
    for(int i =0;i<=3;i++){
      cout<<arr[i]<<endl;
  }

    return;
  }
  arr[i]=arr[arr.size()-1-i];


  rev(arr,i+1);
}


int main(){
  vector<int> arr ={1,2,3,4};
  cout<<"Hii"<<endl;
  rev(arr,0);
  for(int i =0;i<=3;i++){
    cout<<arr[i];
  }


}