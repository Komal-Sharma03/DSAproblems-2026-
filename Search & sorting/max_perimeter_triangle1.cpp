#include<bits/stdc++.h>
using namespace std;

int MaxPeri(vector<int> &arr){
    int n=arr.size();
    if(n<3) return -1;
    int maxP=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                    if(arr[i]+arr[j]>arr[k] && arr[j]+arr[k]>arr[i] && arr[i]+arr[k]>arr[j]){
                        maxP=max(maxP,arr[i]+arr[j]+arr[k]);
                    }
            
            }
        }
    }

    return maxP;
}

int main(){
    vector<int> arr={6,1,6,5,8,4};
    cout<<MaxPeri(arr);

    return 0;

    //O(n^3), O(1)
}
