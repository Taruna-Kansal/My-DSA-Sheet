#include<iostream>
using namespace std;
int lastOcc(int arr[],int n,int low,int high,int x)
{
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]>x)
    {
        lastOcc(arr,n,low,mid-1,x);
    }
    else if (arr[mid]<x)
    {
        lastOcc(arr,n,mid+1,high,x);
    }
    else
    {
        if(mid==n-1 || arr[mid+1]!=arr[mid])
        {
            return mid;
        }
        else{
            lastOcc(arr,n,mid+1,high,x);
        }
    }
}
int main()
{
    int n,x;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to find";
    cin>>x;
    int low=0, high=n-1;
    int ans =lastOcc(arr,n,low,high,x);
    cout<<ans;
    
}