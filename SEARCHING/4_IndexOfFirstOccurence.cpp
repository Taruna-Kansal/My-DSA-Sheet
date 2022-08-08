#include<iostream>
using namespace std;
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
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to find";
    cin>>x;
    cout<<"Answer is ";
    int ans = firstOccurence(arr,n,x);
    cout<<ans;
}