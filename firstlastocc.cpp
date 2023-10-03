#include<iostream>
using namespace std;
int first(int arr[],int n,int k){
    int s=0 , e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int last(int arr[],int n,int k){
    int s=0 , e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;

        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
    mid =s+(e-s)/2;
    }
    return ans;
}
int main(){
    int a[5]={1,2,3,3,3};
   
    cout<<"first occurence of 3 is at index "<<first(a,5,3)<<endl;
    cout<<"last occurence of 3 is at index "<<last(a,5,3)<<endl;;
    return 0;
}