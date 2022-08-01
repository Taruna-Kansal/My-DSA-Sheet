//O(n)
#include<iostream>
using namespace std;
int largestEle(int arr[],int n)
{
    int largestElement=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largestElement])
        largestElement=i;
    }
    return largestElement;
}
int main()
{
    cout<<"Enter size";
    int n;
    cin>>n;
    cout<<"Enter elements:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans= largestEle(arr,n);
    cout<<ans;
}