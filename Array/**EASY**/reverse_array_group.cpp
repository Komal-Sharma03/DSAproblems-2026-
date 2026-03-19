#include<bits/stdc++.h>
using namespace std;

void ReverseArrayGroup(vector<int> &arr , int k){
     int n=arr.size();
     for(int i=0;i<n;i+=k){
        int l=i;
        int r=min(i+k-1,n-1);
        while(l<r){
            swap(arr[l++],arr[r--]);
        }
     }
}

int main(){
    vector<int> arr={5,6,8,9};
    ReverseArrayGroup(arr,5);
    for(int a:arr){
        cout<<a<<" ";
    }

    return 0;
}
