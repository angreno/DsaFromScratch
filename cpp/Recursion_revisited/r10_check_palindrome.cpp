#include <bits/stdc++.h>
using namespace std;

bool checkpalidrome(string check,int i){
    if(i>=check.size()/2){
        return true;
    }
    if(check[i] != check[check.size()-i-1]){
        return false;
    }
    return checkpalidrome(check,i+1);

    

}


int main() {
    string a;
    cin>>a;
    cout<<checkpalidrome(a,0);



    return 0;
}