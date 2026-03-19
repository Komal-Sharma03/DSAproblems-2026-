#include<bits/stdc++.h>
using namespace std;

void ZerosEnd(vector<int> &arr){
    int n=arr.size();
    int j=0;
    for(int i=0;i<n;i++){
       if(arr[i] != 0){
         swap(arr[i],arr[j]);
         j++;
       }
    }

}
int main(){
    vector<int> arr={1,2,0,4,3,0,5,0};
    ZerosEnd(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
    //O(n), O(1)
}
