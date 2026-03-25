#include <iostream>
using namespace std;

void Print_N_to_1(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
        return Print_N_to_1(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Print_N_to_1(n);

    return 0;
}
