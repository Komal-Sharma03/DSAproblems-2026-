#include<bits/stdc++.h>
using namespace std;

vector<int> Majority(vector<int> &arr){
    int n=arr.size();
    int ans1=INT_MIN;
    int ans2=INT_MIN;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(cnt1==0){
            ans1=arr[i];
            cnt1++;
        }
        else if(arr[i]==ans1){
            cnt1++;
        }
        else if(cnt2==0){
            ans2=arr[i];
            cnt2++;
        }
        else if(arr[i]==ans2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    vector<int> res;
    cnt1=0, cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ans1) cnt1++;
        if(arr[i]==ans2) cnt2++;
    }

    if(cnt1>n/3) res.push_back(ans1);
    if(cnt2>n/3 && ans1 != ans2) res.push_back(ans2);

    if (res.size()==2 && res[0]>res[1]) swap(res[0],res[1]);

    return res;
}

int main(){
    vector<int> arr={3,2,2,4,1,4};
    vector<int> res=Majority(arr);
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;
}
