vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        int cnt=0;
        int mult=1;
        int indx=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                indx=i;
                cnt++;
            }
            else{
                mult=mult*arr[i];
            }
        }
        vector<int> res(n,0);
        if(cnt==1){
            res[indx]=mult;
        }
        else if(cnt==0){
            for(int i=0;i<n;i++){
                res[i]=mult/arr[i];
            }
        }
        
        return res;
    }

int main(){
  vector<int> arr={10,3,5,6,2};
  vector<int> res=productExceptSelf(arr);
  for(int x:res){
      cout<<x<<" ";
  }
}
