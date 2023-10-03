#include<iostream>
using namespace std;
//peak point concept is wo index jab aapka array opposite arranging order follow krne lag jaye ;
// jese asending ya descending according to your last poinnt;
int peakpoint(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid] <arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int a[7]={6,5,7,4,3,2,1}; 
    cout<<peakpoint(a,7);
}
