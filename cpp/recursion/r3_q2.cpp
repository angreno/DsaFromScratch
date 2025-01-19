#include<bits/stdc++.h>
using namespace std;
static int i =0;
int p(int n ){
  if(i == n){
    return 0;
  }
  else{
    i++;
    cout<<i;
    p(n);
  }
}

int main(){
  p(5);


}