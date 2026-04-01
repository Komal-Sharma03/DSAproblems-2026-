#include<bits/stdc++.h>
using namespace std;

vector<int> MissRep(vector<int> &arr){
    int n=arr.size();
    int repeating=-1, missing=-1;
    for(int i=0;i<n;i++){
        int val=abs(arr[i]);
        if(arr[val-1]>0){
            arr[val-1]=-arr[val-1];
        }
        else{
            repeating=val;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            missing=i+1;
            break;
        }
    }

    return {repeating,missing};
}

int main(){
    vector<int> arr={4, 3, 6, 2, 1, 1};
    vector<int> res=MissRep(arr);
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;

    //O(n), O(1)
}
