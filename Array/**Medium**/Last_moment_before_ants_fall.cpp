#include<bits/stdc++.h>
using namespace std;

int LastFalls(int n,vector<int> &left, vector<int> &right){
    int nl=left.size();
    int nr=right.size();
    int ans=INT_MIN;

    for(int i=0;i<nl;i++){
        ans=max(ans,left[i]);
    }
    for(int i=0;i<nr;i++){
        ans=max(ans,n-right[i]);
    }

    return ans;
}

int main(){
    int n=4;
    vector<int> left={2};
    vector<int> right={0,1,3};
    cout<<LastFalls(n,left,right);

    return 0;

    //O(m)(no. of ants on the plank), O(1)
}
