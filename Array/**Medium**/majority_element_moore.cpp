#include<bits/stdc++.h>
using namespace std;

int MajorityElem(vector<int> &arr){
    int n=arr.size();
    int ans=INT_MIN;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            ans=arr[i];
            cnt++;
        }
        else if(ans==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    cnt=0;
    for(int i=0;i<n;i++){
        if(ans==arr[i]){
            cnt++;
        }
    }
    if(cnt>n/2) return ans;

    return -1;
}

int main(){
    vector<int> arr={1,1,2,1,3,5,1};
    cout<<MajorityElem(arr)<<endl;

    return 0;
}
