#include<bits/stdc++.h>
using namespace std;
void fun(char name){
  int count =0;
  if(count==7){
    return ;
  }
  else{
    cout<<"my name first letter is "<<name<<endl;
    count++;
    fun(name);
  }

  //here fun calls itself
  
 


}

int main(){
  int count =0;
  //recursion function which call itself until specified condition is met is called recursive function and this process of calling function which calls itself is knowns as recursion
  // when memory of stack get filled by function calls and cannot call more function it is known as stack overflow

  fun('k');




}