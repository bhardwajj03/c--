#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector <int> arr,int size,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
 
    }
    return start;
}
int main(){
    vector<int> a{2,3,5,9,14,16,18};
    int size=a.size();
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    binarysearch(a,size,key);
}