#include<bits/stdc++.h>
using namespace std;

int MaxPeri(vector<int> &arr){
    int n=arr.size();
    if(n<3) return -1;
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>3;i--){
        if(arr[i]<arr[i-1]+arr[i-2]){
            return arr[i]+arr[i-1]+arr[i-2]
        }
    }
}

int main(){
    vector<int> arr={7,55,20,1,4,33,12};
    cout<<MaxPeri(arr);

    return 0;

    //O(nlogn), O(1)
}
