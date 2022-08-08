//O(n^2)
//Find a triplet with given sum
#include<iostream>
using namespace std;
bool isPairSum(int arr[],int low, int high, int x)
{
    while(low<high)
    {
        if(arr[low]+arr[high]==x)
        return true;

        else if(arr[low]+arr[high]>x)
        high--;
        
        else
        low++;
    }
    return false;
}
bool isTripletSum(int arr[], int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(isPairSum(arr,i+1,n-1,x-arr[i]))
        return true;
    }
    return false;
}
int main()
{
    int n,x;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Answer is ";
    cout<<isTripletSum(arr,n,x);
}