#include<iostream>
using namespace std;
int countdigit(int n){
    int i = n;
    cout<<"we entered into function";
    int digit =0;
    while (n >0){
        cout<<"we entered in looop";
        n=n/10;
        ++digit;
        


    }
    return digit;
   
}

int main(){
    int n ;
    cin>>n;
    cout<<countdigit(n);

    
}