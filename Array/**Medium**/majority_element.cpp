#include<bits/stdc++.h>
using namespace std;

int MajorityElem(vector<int> &arr){
    int n=arr.size();
    unordered_map<int,int> countMap;
    for(int x:arr){
        countMap[x]++;

        if(countMap[x]>n/2){
            return x;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,1,2,1,3,5,1};
    cout<<MajorityElem(arr)<<endl;

    return 0;

    // O(n), O(n)
}
