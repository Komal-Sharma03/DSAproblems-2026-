#include<bits/stdc++.h>
using namespace std;

vector<int> ArrayLeaders(vector<int> &arr){
    int n=arr.size();
    vector<int> res;
    int mx=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=mx){
            mx=arr[i];
            res.push_back(mx);
        }
        
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    vector<int> arr={1,2,3,4,5,2};
    vector<int> res=ArrayLeaders(arr);
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;
    //O(n) , O(1)
}
