#include<bits/stdc++.h>
using namespace std;

void AddOneEnd(vector<int> &arr){
    int index=arr.size()-1;
    while(index>=0 && arr[index]==9){
        arr[index--]=0;
    }
    if(index<0){
        arr.insert(arr.begin(),1);
    }
    else{
        arr[index]++;
    }
}
int main(){
    vector<int> arr={9,9,9,9};
    AddOneEnd(arr);
    for(int x:arr){
        cout<<x;
    }

    return 0;
}
