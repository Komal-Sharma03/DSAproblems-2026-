#include<bits/stdc++.h>
using namespace std;

void ReverseArray(vector<int> &arr){
    int n=arr.size();
    for(int i=0 ; i<n/2 ; i++){
        swap(arr[i],arr[n-i-1]);
    }

}

int main(){
    vector<int> arr={1,4,3,2,6,5};
    ReverseArray(arr);
    for(int a:arr){
        cout<<a<<" ";
    }
    
    return 0;
    
}
