#include<bits/stdc++.h>
using namespace std;

int MaxSumSubarray(vector<int> &arr){
    int maxSum=arr[0];
    int n=arr.size();
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum+=arr[j];

            maxSum=max(maxSum,currSum);
        }
        
    }

    return maxSum;
}

int main(){
    vector<int> arr={2,3,-8,7,-1,2,3};
    cout<<MaxSumSubarray(arr);

    return 0;

    //O(n^2), O(1)
}
