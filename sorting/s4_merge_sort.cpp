#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int mid, int low, int high ){
    int left = low; 
    int right = mid+1;
    vector<int> temp;
    while((left <= mid) && (high >= right) ){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
            //if left gets exhausted
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }

    for(int i =low; i<=high;i++){
        arr[i]=temp[i-low];


    }
    
}
void mergesort(int arr[],int low , int high){
    //divide base condition
    if(high <= low){
        return;

    }
     int mid = (low + high )/2;
     mergesort(arr,low, mid);
     mergesort(arr,mid+1,high);

     merge(arr,mid,low,high);
        for(int i=0 ; i<=4;i++){
            cout<<arr[i];
     }
     cout<<endl;
}
// its takes O(n log n) 
// and space O(n)

int main() {
    int arr [5]= {3,2,4,1,3};
    mergesort(arr, 0,4);
    


    return 0;
}