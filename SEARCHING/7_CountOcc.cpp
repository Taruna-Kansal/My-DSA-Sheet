// t.c = O(log n + log n) = O(log n)
// s.c = O(1)
#include<iostream>
using namespace std;
int countOcc(int first, int last)
{
    if(first==-1)
    {
        return 0;
    }
    else
    {
        return (last-first+1);
    }
}
int firstOccurence(int arr[],int n, int x)
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
            if(mid==0 || arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else 
            {
                high = mid-1;
            }
        }
    }
    return -1;
}
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
    int n,x;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elemets";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to find ";
    cin>>x;
    int first=firstOccurence(arr,n,x);
    int last=lastOcc(arr,n,x);
    int ans=countOcc(first,last);
    cout<<ans;
}