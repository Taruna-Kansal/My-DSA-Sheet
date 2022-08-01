// given an array and a sum , we have to check whether the subarray with given sum exists or not 
#include<iostream>
using namespace std;
bool findSum(int arr[], int n,  int sum)
{
    int curr_sum=arr[0], s=0;
    for(int e=1; e<n; e++)
    {
        while(curr_sum>sum && s<e)
        {
            curr_sum-=arr[s];
            s++;
        }
        if(curr_sum==sum)
        {
            return true;
        }
        if(e<n)
        {
            curr_sum+=arr[e];
        }
    }
    return(curr_sum==sum);
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
    cout<<"Enter the sum ";
    cin>>s;
    int ans=findSum(arr,n,s);
    cout<<ans;
}