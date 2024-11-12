//  Iss topic pe we've given an array jisme sab elements pair mai or ek elemnt extra h ,
// to uska index hame batana h 
    #include<bits/stdc++.h>
    using namespace std;
    int odd_occur(vector <int> arr,int n){
        int s=0;
        int e=n-1;
        int mid = s+(e-s)/2;
        while(s<=e){
            // Here we are conquring case of similarity , when both start and end becomes similar 
            //then it will return S
            if(s==e){
                return s;
            }
            if(mid&1){
                //condition:- agar mid divide krne k baad possition odd aati h mid ki to 
                if(mid-1 >=0 && arr[mid-1]==arr[mid]){
                //idhar ham 2 condition check kar rhe h :-
                // 1. agar mid-1 element is euqal or greater than 0 hoga to aage chalega wrna false hogi cond.
                //2. idhar check krr rhe h ki previous element kya equal h mid k ya nahi 
                //agar h to hame right mai jana hai 
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            else{
                 //condition:- agar mid divide krne k baad possition even aati h mid ki to
                if(mid + 1 <n && arr[mid]==arr[mid+1]){
                    s=mid+2;
                }
                else{
                    e=mid;
                }
            }   
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int main(){
        
        vector <int> arr {10,10,3,3,4,4,3,5,5,8,8};
        int n=sizeof(arr);
        int ans=odd_occur(arr,n);
        cout<<ans<<endl;;
    }
