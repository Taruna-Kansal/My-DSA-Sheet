#include<iostream>
using namespace std;
int maxSumSubarray(unsigned int arr[],int n)
{                                 
    int curr;
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[i];
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    int n; 
    cin>>n;
    unsigned int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = maxSumSubarray(arr,n);
    cout<<ans;
}