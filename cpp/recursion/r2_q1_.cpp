#include<bits/stdc++.h>
using namespace std;
int i = 0;
string pattern(string n ){
  if(i == 5){
  return " ";
  }
  else{
      
  i++;
  pattern(n);
  cout<<n<<endl;
  }



  
}
int  main(){
  pattern("Angreno");


}