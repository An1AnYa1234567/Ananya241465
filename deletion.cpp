#include<bits/stdc++.h>
using namespace std;
int count_element(int*arr)
{
    int i=0;
    while(arr[i]!=0)
    {
        i++;
    }
    return i;
}
void deletion(int *arr,int &n,int pos)
{
    if(pos>0 || pos<=n)
    {
        for(int i= pos+1;i<=n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n]=-999;
    }
    else
    {
        cout<<"invalid index"<< endl;
    }
}
int main()
{
    int size=30;
    int arr[size]={4,7,9,2,3,8,9,76};
    int n,pos;
    n=count_element(arr);
    cout<<"enter the postion of deletion"<<endl;
    cin>>pos;
    cout<<"array before deletion:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    deletion(arr,n,pos);
    cout<<endl<<"array after deletion:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}