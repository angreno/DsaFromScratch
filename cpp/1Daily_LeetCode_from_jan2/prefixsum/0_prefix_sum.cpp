#include<bits/stdc++.h>
using namespace std; 

int main(){
  int arr []={1,2,4,5,6,7,7,7,34};
  int query[2];
  cout<<"type query index 1"<<endl;
  cin>>query[0];
  cout<<"type query index 2"<<endl;
  cin>>query[1];
  cout<<"your query array is "<<endl;
  for(int i =0 ; i<=1; i++){
    cout<<query[i]<<" ";
  }
  int j = query[0];
  int k = query [1];
  int n = 9;
  int s=0;

  //prefix sum algorithm by me 
  cout<<"\nupdated prefix array"<<endl;
  for(int i =0 ; i<=n-1;i++ ){
    s=arr[i]+s;
    arr[i]=s;
    cout<<arr[i]<<" ";
  }
  //query handler
  if (j == 0) {
        cout<<"\nsum of your query is :"<< arr[k]; // Sum from 0 to k
    } else {
        cout<<"\nsum of your query is :"<< arr[k] - arr[j - 1]; // Sum from j to k
    }
  

}