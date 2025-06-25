#include<bits/stdc++.h>
using namespace std;

int main(){
  vector <int> arr = {100, 180, 260, 310, 40, 535, 695};
  int stock_buy = arr[0];
  int lar;
  int day =0; 
  int sell_day =0;
  //for buying stock
  for(int i =0 ; i<arr.size(); i++){
    if(arr[i] < stock_buy){
      stock_buy = arr[i];
      day= i;
    }

  }
  cout<<"\n day to buy stock "<<day;

  //for selling the stock 
  for(int i =0 ; i<arr.size() ; i++){
    if(arr[i] > stock_buy){
      lar = arr[i];
      sell_day = i;

    }

  }
  cout<<"\n day to sell stock"<<sell_day;
  if(sell_day> day){
    cout<<"\n total profit"<<arr[sell_day]-arr[day];
  }
  else{
    cout<<"no suitable stock";
  }

}