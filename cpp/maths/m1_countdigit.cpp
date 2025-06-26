#include<iostream>
using namespace std;

int main(){
 int a; 
 cin>>a;
 int s =0;
 int count =0;
 while(a>0){
  //to get last digit 
  s = a%10;
  count++;
  a=a/10;


 }
 //to print last digit
 cout<<s<<" "<<count;

}