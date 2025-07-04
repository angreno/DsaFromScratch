#include <bits/stdc++.h>
using namespace std;

int mergesort(int arr,int low , int high){
    //divide base condition
    if(high >= low){
        return;

    }
     int mid = (low + high )/2;
     mergesort(arr,low, mid);
     mergesort(arr,mid+1,high);
}

int main() {
    int arr [5]= {3,2,4,1,3};
    


    return 0;
}