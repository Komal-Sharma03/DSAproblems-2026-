#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr,int target){
    int n=arr.size();
    int ans=-1;
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }

    }
    return ans;
}

int main(){
    vector<int> arr={1,1,1,1,2};
    int target=1;
    cout<<BinarySearch(arr,target);

    return 0;
}
