#include<bits/stdc++.h>
using namespace std;

int MaxConsecutive(vector<int> &arr){
    int n=arr.size();
    int count=0;
    int maxCount=0;
    int prev=-1;

    for(int i:arr){
        if(i^prev==0){
            count++;
            prev=i;
        }
        else{
            maxCount=max(maxCount,count);
            count=0;
        }
    }
    return max(maxCount,count);
}

int main(){
    vector<int> arr={0,1,0,1,1,1,1};
    cout<<MaxConsecutive(arr)<<" ";

    return 0;
}
