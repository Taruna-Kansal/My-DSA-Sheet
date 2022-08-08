#include<iostream>
using namespace std;
int getPeakElement(int arr[],int n)
{
    int low =0 , high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        // if((mid==0 && arr[mid+1]<=arr[mid]) || (mid==n-1 && arr[mid-1]<=mid )|| (arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]) || (mid==0 && mid==n-1))
        // return mid;

        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 ||  arr[mid+1]<=arr[mid]))
        return arr[mid];

        else
        {
            if( mid >0 && arr[mid-1]>=arr[mid])
            {
                high=mid-1;
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
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = getPeakElement(arr,n);
    cout<<"Peak element is "<<ans;
}