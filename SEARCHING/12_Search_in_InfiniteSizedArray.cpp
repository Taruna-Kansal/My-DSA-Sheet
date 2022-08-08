//Unbounded binary search algorithm
//efficient solution
// t.c = O(log(pos))
#include<iostream>
using namespace std;
int binarySearch(int arr[],int x, int low, int high )
{
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==x)
        return mid;

        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        
        else{
            low=mid+1;
        }
    }
    return -1;
}
int search(int arr[],int x)
{
    int i=1;
    while(arr[i]<x)
    {
        i=i*2;
    }
    if(arr[i]==x) return i;
    else return binarySearch(arr,x,(i/2)+1, i-1);
}
int main()
{
    //here n will be infinite
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element";
    cin>>x;
    
    int ans = search(arr,x);
    cout<<ans;
}