#include<bits/stdc++.h>
using namespace std;
void tlg(vector<int> &arr , vector<int> &brr,vector<int> &result){
    int ans,val=0;
    for(int i=0;i<arr.size();i++){
        if ((arr[i]-brr[i])>(brr[i]-arr[i])){
            val=1;
        }
        else{
            val=2;
        }
            ans=(-1)*(arr[i]-brr[i]);
            for(int j=0;j<arr.size();j++){
                result.push_back(ans);
            }
            
            for(int j=0;j<1;j++){
                cout<<val<<*max_element(result.begin(),result.end())<<endl;
            }
            
            
        
    }
}
int main(){
  
     int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"1st"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    vector<int> brr(n);
    cout<<"2nd"<<endl;
    for(int i=0;i<brr.size();i++){
        cin>>brr[i];
    }
    vector<int> result;
    tlg(arr,brr,result);
}