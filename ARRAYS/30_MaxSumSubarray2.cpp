#include<iostream>
using namespace std;
int maxSumSubarray(int arr[],int n)
{
    int res=arr[0], maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum = maxSumSubarray(arr, n);
    cout << "Maximum contiguous sum is " << max_sum
    return 0;
} 

