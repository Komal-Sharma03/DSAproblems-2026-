#include<bits/stdc++.h>
using namespace std;


void AddOneEnd(vector<int> &arr){
    int n=arr.size();
    int carry=1;
    for(int i=n-1;i>=0;i--){
        arr[i]+=carry;
        carry=arr[i]/10;
        arr[i]=arr[i]%10;
    }
    if(carry){
        arr.insert(arr.begin(),carry);
    }
}

int main(){
    vector<int> arr={1,2,4};
    AddOneEnd(arr);
    for(int x:arr){
        cout<<x;
    }

    return 0;
}
