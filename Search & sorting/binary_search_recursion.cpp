#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr,int low,int high,int target){
       int mid=low+(high-low)/2;
       while(left<=right){
       if(arr[mid]==target){
          return mid;
       }
       else if(arr[mid]<target){
          return BinarySearch(arr,mid+1,high,target);
       }
       return BinarySearch(arr,low,mid-1,target);
       }

       return -1;
}


int main(){
    vector<int> arr={2,3,4,10,40};
    int target=10;
    cout<<BinarySearch(arr,0,arr.size()-1,target);

    return 0;
}
