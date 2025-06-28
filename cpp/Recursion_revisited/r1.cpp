#include<iostream>
using namespace std;

void name(string a,int count){
  if(count == 4){
    return;
  }
    cout<<a;
    count++;
    name(a,count);
}
int main(){
  name("k",0);


}