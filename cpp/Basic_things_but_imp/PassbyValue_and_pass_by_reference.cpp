#include<iostream>
using namespace std;
// pass by value 
/*in pass by value we pass a copy of value hence when we pass value in function its copy is pass to understand more example is below*/
void a(int a ){
  a++;
}
void d(int a, int &b ){
  a++;
  b++;
}
int main(){
  int b =2 ; 
  cout<<b<<endl;

  a(b);
  cout<<b<<endl;
  //you will notice that even after increasing value of b in function it doesn't increase 
  /*from here the role of pass by reference kicks in  the pass by reference passes orignal value . 
    we can do it by adding & before parameter name in function 
    */
  int c =7; 
  cout<<b<<c<<endl;
  d(b,c);
  cout << "Value of b: " << b << ", Value of c: " << c << " - we can notice that value to c is increease when we passed reference " << endl;





}