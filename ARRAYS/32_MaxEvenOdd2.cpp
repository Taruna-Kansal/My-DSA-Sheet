#include<iostream>
using namespace std;
int maxEvenOdd(int arr[],int n)
{
    int res=1, curr=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2!=0 && arr[i-1]%2==0)
        {
            curr++;
            res=max(res,curr);
        }
        else curr=1;
    }
    return res;
}
int main()
{
    cout<<"Enter size";
    int n;
    cin>>n;
    cout<<"Enter elements";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = maxEvenOdd(arr,n);
    cout<<ans; 
}