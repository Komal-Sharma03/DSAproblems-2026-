#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> MissingRangeOut(vector<int> &arr, int lower,int upper){
      vector<vector<int>> res;
      int nxt=lower;
      
      for(int x:arr){
        if(x<lower) continue;
        if(x>upper) break;

        if(x>nxt){
            res.push_back({nxt,x-1});
        }
        nxt=x+1;
      }
      if(nxt<=upper){
         res.push_back({nxt,upper});
      }
      return res;
}

int main(){
    vector<int> arr={};
    int lower=5, upper=8;
    vector<vector<int>> res=MissingRangeOut(arr,lower,upper);
    for(const vector<int> &v : res){
        cout<<v[0]<<" "<<v[1]<<endl;
    }

    return 0;
}
