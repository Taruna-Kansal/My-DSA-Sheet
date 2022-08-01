
#include<bits/stdc++.h>
using namespace std;
int maxConsSum(int arr[],int n,int k)
{
    int max_sum = INT_MIN;
    for(int i=0;i<n-k+1;i++)
    {
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum += arr[i+j];
        }
        max_sum=max(sum,max_sum);
    }
    return max_sum;
}
int main()
{
    int n,k;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of k ";
    cin>>k;
    int ans=maxConsSum(arr,n,k);
    cout<<ans;
}