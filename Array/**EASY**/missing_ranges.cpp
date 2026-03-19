#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> MissingRanges(vector<int> &arr, int lower, int upper){
    int n=arr.size();
    vector<vector<int>> res;
    if(n==0){
        res.push_back({lower,upper});
        return res;
    }
    if(arr[0]>lower){
       res.push_back({lower,arr[0]-1});
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]>1){
            res.push_back({arr[i]+1,arr[i+1]-1});
        }
    }
    if(upper>arr[n-1]){
        res.push_back({arr[n-1]+1,upper});
    }

    return res;
}

int main(){
    vector<int> arr={};
    int lower=5, upper=7;
    vector<vector<int>> res=MissingRanges(arr,lower,upper);
    for(const vector<int>&x:res){
        cout<<x[0]<<" "<<x[1]<<endl;
    }

    return 0;
}
