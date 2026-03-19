#include<bits/stdc++.h>
using namespace std;

int Stock(vector<int> &arr){
    int n=arr.size();
    int mn=INT_MAX;
    int ans=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
        ans=max(ans,arr[i]-mn);
    }
    if(ans<=0){
        return 0;
    }
    return ans;
}

int main(){
    vector<int> arr={1,3,6,9,11};
    cout<<Stock(arr)<<endl;

    return 0;
    //O(n), O(1)
}
