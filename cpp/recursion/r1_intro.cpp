#include<bits/stdc++.h>
using namespace std;

int countl = 0;


void fun(char name){
  //static int count =0;
  if(countl==7){
    return ;
  }
  else{
    cout<<"my name first letter is "<<name<<endl;
    countl++;
    
    fun(name);
  }

  //here fun calls itself
  
 


}

int main(){
  //recursion function which call itself until specified condition is met is called recursive function and this process of calling function which calls itself is knowns as recursion
  // when memory of stack get filled by function calls and cannot call more function it is known as stack overflow

  fun('k');




}