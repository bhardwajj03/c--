//  Iss topic pe we've given an array jisme sab elements pair mai or ek elemnt extra h ,
// to uska index hame batana h 
#include<bits/stdc++.h>
using namespace std;
int odd_occur(arr,n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid&1){
            if(arr[mid-1]==arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        else{
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        return -1;
    }

}
int main(){
    vector<int>a{10,10,3,3,4,4,3,5,5,8,8};
    
    int n=sizeof(a);
    cout<<odd_occur(a,n);
}
