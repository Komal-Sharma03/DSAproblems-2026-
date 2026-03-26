#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr={2,3,4,10,40};
    int target=10;
    cout<<BinarySearch(arr,target);

    return 0;
}
