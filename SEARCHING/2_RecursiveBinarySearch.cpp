//t.c = O(log n)
//s.c=O(log n)
#include<iostream>
using namespace std;
int recBinarySearch(int arr[], int low, int high, int x)
{

    if(low>high)
    {
        return -1;
    }

    int mid=(low+high)/2;

    if(arr[mid]==x)
    return mid;

    else if(arr[mid]>x)
    {
        recBinarySearch(arr,low,mid-1,x);
    }
    else
    {
        recBinarySearch(arr,mid+1,high,x);
    }

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
    int x;
    cout<<"Enter the element to find";
    cin>>x;
    cout<<"Answer is";
    int low=0, high=n-1;
    int ans = recBinarySearch(arr,low,high,x);
    cout<<ans;
}