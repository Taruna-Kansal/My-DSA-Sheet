#include<iostream>
using namespace std;
int maxDiff(int arr[],int n)
{
    int minval=arr[0];
    int res = arr[1] - arr[0];
    for(int i=1;i<n;i++)
    {
        res = max(res, arr[i]-minval);
        minval = min(minval, arr[i]);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = maxDiff(arr,n);
    cout<<ans;
}