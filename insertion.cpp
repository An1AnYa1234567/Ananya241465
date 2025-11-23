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
void insert(int *arr,int &n,int pos,int val )
{
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;
}
int main()
{
    int size=30;
    int arr[size]={2,3,4,5,6,7};
    int n=count_element(arr);
    int val,pos;
    cout<<"enter the value to be inserted"<<endl;
    cin>>val;
    cout<<"enter the postion of insertion"<<endl;
    cin>>pos;
    cout<<"array before insertion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    if(pos<0 || pos>n)
    {
        cout<<"wrong postion"<<endl;
        return -1;
    }
    insert(arr,n,pos,val);
    cout<<endl<<"array after insertion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
