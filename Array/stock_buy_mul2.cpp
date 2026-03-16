#include<bits/stdc++.h>
using namespace std;

int StockMul(vector<int> &arr){
    int n=arr.size();
    int ans=0;
    int i=0;
    while(i<n-1){
        while(i<n-1 && arr[i]>=arr[i+1]) i++;
        int lmin=arr[i];

        while(i<n-1 && arr[i]<arr[i+1]) i++;
        int lmax=arr[i];

        ans+=lmax-lmin;
    }
    return ans;
}

int main(){
    vector<int> arr={100,180,260,310,40,535,695};
    cout<<StockMul(arr)<<endl;

    return 0;
}
