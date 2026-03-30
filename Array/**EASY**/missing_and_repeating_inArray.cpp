#include<bits/stdc++.h>
using namespace std;

vector<int> MissingRepeating(vector<int> &arr){
    int n=arr.size();
    int missing=-1, repeating=-1;
    vector<int> temp(n+1,0);
    for(int i=0;i<n;i++){
         temp[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(temp[i]==0) missing=i;
        if(temp[i]==2) repeating=i;
    }
    
    return {missing,repeating};
}

int main(){
    vector<int> arr={4,3,6,2,1,1};
    vector<int> res=MissingRepeating(arr);
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;

    //O(n), O(n)
}
