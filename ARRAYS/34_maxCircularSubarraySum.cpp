#include<iostream>
using namespace std;
int normalSubarraySum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}
int maxCircularSubarraySum(int arr[], int n)
{
    int maxNormalSubarraySum = normalSubarraySum(arr,n);
    if(maxNormalSubarraySum < 0)
    {
        return maxNormalSubarraySum;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
        arr[i]=-arr[i];
    }
    int circular_sum = arr_sum + normalSubarraySum(arr,n);
    return max(maxNormalSubarraySum, circular_sum);
    
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