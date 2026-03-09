#include<bits/stdc++.h>
using namespace std;

int ThirdLargest(vector<int> &arr){
    int n=arr.size();
    int ans1=INT_MIN;
    int ans2=INT_MIN;
    int ans3=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>ans1){
            ans3=ans2;
            ans2=ans1;
            ans1=arr[i];
        }
        else if(arr[i]<ans1 && arr[i]>ans2){
            ans3=ans2;
            ans2=arr[i];
        }
        else if(arr[i]<ans2 && arr[i]>ans3){
            ans3=arr[i];
        }
    }
    if(ans3==INT_MIN){
        return -1;
    }
    return ans3;
}

int main(){
    vector<int> arr={12,35,1,10,34,1};
    cout<<ThirdLargest(arr)<<" ";

    return 0;
}
