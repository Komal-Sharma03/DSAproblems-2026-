#include<iostream>
using namespace std;

void PrintSeq(int n){
    if(n==0){
        return;
    }
    PrintSeq(n-1);

    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    PrintSeq(n);

}
