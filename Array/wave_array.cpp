#include<bits/stdc++.h>
using namespace std;

void WaveArray(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
    WaveArray(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
    //O(n), O(1)
}
