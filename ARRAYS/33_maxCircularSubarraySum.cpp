// brute approach, t.c=O(n^2)
#include<iostream>
using namespace std;
int maxCircularSubarraySum(int arr[],int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for(int j=1;j<n;j++)
        {
            int index= (i+j)%n;
            curr_sum += arr[index];
            curr_max = max(curr_sum,curr_max);
        }
        res = max(res,curr_max);
    }
    return res;
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
    int ans = maxCircularSubarraySum(arr,n);
    cout<<ans;
    return 0;
}