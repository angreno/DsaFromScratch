#include<bits/stdc++.h>
using namespace std;
int pattern(int n ){
  static int i =0;
  while (i != 0){
  pattern(n-1);
  return n;
  }
  
}
int  main(){
  cout<<pattern(4);

}