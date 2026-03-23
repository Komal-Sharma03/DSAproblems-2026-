#include<bits/stdc++.h>
using namespace std;

int MaxProdSubarray(vector<int> &arr){
    int n=arr.size();
    int maxP=arr[0];
    for(int i=0;i<n;i++){
        int currP=1;
        for(int j=i;j<n;j++){
            currP*=arr[j];
        
            maxP=max(maxP,currP);
        }
    }
    return maxP;
}


int main(){
    vector<int> arr={-2,6,-3,-10,0,2};
    cout<<MaxProdSubarray(arr);

    return 0;
}
