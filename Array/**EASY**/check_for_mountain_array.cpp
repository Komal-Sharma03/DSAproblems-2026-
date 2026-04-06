#include<bits/stdc++.h>
using namespace std;

bool CheckMountain(vector<int> &arr){
    int n=arr.size();
    int i=0;
    if(n<3) return false;
    for(i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            break;
        }
    }
    if(i==1 || i==n) return false;
    for(;i<n;i++){
        if(arr[i]>=arr[i-1]){
            break;
        }
    }

    return i==n;
}

int main(){
    vector<int> arr={1, 2, 3, 4, 9, 8, 7, 6, 5};
    cout<<CheckMountain(arr);

    return 0;
}
