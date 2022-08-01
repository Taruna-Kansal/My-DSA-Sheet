// given an array and a sum , we have to check whether the subarray with given sum exists or not 
#include<iostream>
using namespace std;
bool findSum(int arr[], int n, int k, int s)
{
    int curr_sum=0;
    for(int i=0;i<n-k+1;i++)
    {
        curr_sum += arr[i];
        if(curr_sum==s)
        {
            return true;
        }
    }
    for(int i=k;i<n;i++)
    {
        curr_sum += (arr[i]-arr[i-k]);
        if(curr_sum==s)
    {
        return true;
    }
    }
    
    return false;
}
int main()
{
    int n,k,s;
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
    cout<<"Enter the sum ";
    cin>>s;
    int ans=findSum(arr,n,k,s);
    cout<<ans;
}