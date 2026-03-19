#include<bits/stdc++.h>
using namespace std;

void AddOneEnd(vector<int> &arr){
    reverse(arr.begin(),arr.end());
    int index=0;
    while(index<arr.size() && arr[index]==9){
        arr[index++]=0;
    }
    if(index==arr.size()){
        arr.push_back(1);
    }
    else{
        arr[index]++;
    }
    reverse(arr.begin(),arr.end());
}

int main(){
    vector<int> arr={9,9,9};
    AddOneEnd(arr);
    for(int x:arr){
        cout<<x;
    }

    return 0;
}
