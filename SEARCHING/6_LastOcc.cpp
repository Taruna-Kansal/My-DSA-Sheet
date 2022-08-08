#include<iostream>
using namespace std;
int lastOcc(int arr[],int n, int x)
{
   int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if (arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            if(mid==n-1 || arr[mid+1]!=arr[mid])
            {
                return mid;
            }
            else 
            {
                low=mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to find";
    cin>>x;
    int ans=lastOcc(arr,n,x);
    cout<<ans;
}