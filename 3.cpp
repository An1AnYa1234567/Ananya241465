//linear search
#include<iostream>
using namespace std;
// function for linear search
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
         return i;  //element found
    }
  return -1;   // not found   
}

int main()
{
    int n,i,key;
    cout<<"enter no. of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter"<<n<<"elements:";

    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter element to search:";
    cin>>key;
    int result=linearsearch(arr,n,key);
    if(result!=-1)
     cout<<"enter found at index:"<<result<<endl;
    else
     cout<<"element not found"<<endl;
    return 0;
}      
