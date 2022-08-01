//efficient sol -------  t.c=O(n)   s.c=O(1)
#include<iostream>
using namespace std;
int removeDup(int arr[], int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSize=";
    return res;
}
int main()
{
    cout<<"Enter size:";
    int n; 
    cin>>n;
    cout<<"Enter elements:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = removeDup(arr,n);
    cout<<ans;
}
