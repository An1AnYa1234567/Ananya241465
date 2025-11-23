#include<iostream>
using namespace std;
// non recursive binary search
int binarysearch(int arr[],int n,int key)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;    

        if(arr[mid]==key)
          return mid;  //element found
        else if(arr[mid]<key)
          low=mid+1;  // move right
        else
          high=mid-1;  //move left
    }
    return -1;   //not found
}

int main()
{
    int n,key;
    cout<<"enter the no. of element:";
    cin>>n;

    int arr[n];
    cout<<"enter"<<n<<"sorted elements:";

    for(int i=0;i<n;i++)
       cin>>arr[i];

       cout<<" enter element to search:";
       cin>>key;

    int result=binarysearch(arr,n,key);

    if(result!=-1)
          cout<<"element found at index"<<result<<endl;
    else
        cout<<"element not found"<<endl;
    return 0;
        
}