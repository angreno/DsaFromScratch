#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n){
    cout<<"we entered into function";
    int digit =0;
    while (n >0){
        cout<<"we entered in looop";
        n=n/10;
        ++digit;
        


    }
    return digit;
   
}
// optimal approach
int countdigit2(int n ){
    if(n==0){
        cout<<0;
    }  
    n=abs(n);
    return (log10(n))+1;
}
int main(){
    int n ;
    cin>>n;
    cout<<countdigit(n)<<endl;
    cout<<countdigit2(n);

    
}