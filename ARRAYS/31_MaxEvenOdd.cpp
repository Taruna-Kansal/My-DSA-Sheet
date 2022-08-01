//Naive solution---- t.c=O(n2)
#include<iostream>
using namespace std;
int maxEvenOdd(int arr[],int n)
{
    int res = 1;
    for(int i=0;i<n;i++)
    {
        int curr=1;
        for(int j=i+1;j<n;j++)
        {
            if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0))
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    cout<<"Enter elements";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = maxEvenOdd(arr,n);
    cout<<"Max length of even odd subarray is "<<ans;
}