#include<bits/stdc++.h>
using namespace std;

int MaxSumSubarray(vector<int> &arr){
    int n=arr.size();
    int first=arr[0];
    int currSum=arr[0];
    for(int i=1;i<n;i++){
        currSum=max(currSum+arr[i],arr[i]);
    }
    return max(currSum,first);
}

int main(){
    vector<int> arr={2,3,-8,7,-1,2,3};
    cout<<MaxSumSubarray(arr);

    return 0;
}
