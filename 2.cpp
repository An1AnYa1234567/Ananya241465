// binary search with recursive aaproach
#include<iostream>
using namespace std;
//recursive function for binary search
int binarysearch(int arr[],int low,int high,int key)
{
    if(low>high)
    return -1; //base case:not found
    
    int mid=(low+high)/2;
    if(arr[mid]==key)
      return mid;  // element found
    else if(arr[mid]<key)
      return binarysearch(arr,mid+1,high,key);  // search right half
    else
      return binarysearch(arr,mid-1,low,key);   // search left half
}
int main()
{
    int n,key;
    cout<<"enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter"<<n<<"sorted elements:";
    for(int i=0;i<n;i++)
      cin>>arr[i];
      cout<<"enter element to search:";
      cin>>key;
    int result=binarysearch(arr,0,n-1,key);
    if(result!=-1)
     cout<<"element found at index"<<result<<endl;
    else
     cout<<"element not found"<<endl;
    return 0;  

}