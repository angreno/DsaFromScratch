//finding largest element in array 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,4,3,3,7};
    int largest = 0;
    for(int i = 0 ; i<=4  ;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<largest;
}