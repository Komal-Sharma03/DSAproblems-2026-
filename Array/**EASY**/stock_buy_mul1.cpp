#include<bits/stdc++.h>
using namespace std;

int StockMul(vector<int> &arr,int start, int end){
    int ans=0;
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
           if(arr[j]>arr[i]){
              int curr=(arr[j]-arr[i])+StockMul(arr,start,i-1)+StockMul(arr,j+1,end);
              ans=max(ans,curr);
           }
        }
    }
    
    return ans;
}

int main(){
    vector<int> arr={100,180,260,310,40,535,695};
    cout<<StockMul(arr,0,arr.size()-1)<<endl;

    return 0;

    //O(2^n), O(n)
}
