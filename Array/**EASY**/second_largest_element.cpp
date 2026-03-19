#include <bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &arr){
      int n=arr.size();
      int ans1=-1;
      int ans2=-1;
      for(int i=0;i<n;i++){
          if(arr[i]>ans1){
            ans2=ans1;
            ans1=arr[i];
          }
          else if(arr[i]<ans1 && arr[i]>ans2){
            ans2=arr[i];
          }
      }
      if(ans2 == INT_MIN){
        return -1;
      }
      return ans2;
}

int main(){
    vector<int> arr={13,0,-1,-6};
    cout<<SecondLargest(arr);

    return 0;
}
