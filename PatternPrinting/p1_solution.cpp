#include<iostream>
using namespace std;

int main(){
    int row,column;
    cin>>row;
    cin>>column;
    for(int i =0 ; i< row ; i++){
        cout<<"*"<<endl;
        for(int i=0 ; i<column ; i++){
            cout<<"*";
        }

    }
}