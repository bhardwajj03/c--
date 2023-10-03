#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int mid=start+end/2;
  while(start<=end)
  {
    if(arr[mid]==key){
      return mid;
    }
    if(key>arr[mid]){
    start=mid+1;
  }
  else{
    end=mid-1;
  }
  int mid=start+end/2;
  
  }
 return -1; 
}
int main(){
  cout<<"enter size of aray"<<endl;
  int size;
  cin>>size;
  cout<<"enter the elements in array:"<<endl;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"enter key to search"<<endl;
  int key;
  cin>>key;
  int index=binarysearch(arr,size,key);
  cout<<index;
  
  }