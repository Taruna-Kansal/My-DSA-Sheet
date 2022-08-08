//O(n)
//s.c=O(1)
//Find a pair with given sum
#include<iostream>
using namespace std;
bool isPairSum(int arr[], int n, int x)
{
    int low = 0, high=n-1;
    while(low<high)
    {
        if((arr[low]+arr[high])==x)
        return true;

        else if((arr[low]+arr[high]) > x)
        {
            high--;
        }
        else
        {
            low++;
        }

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
    int ans =isPairSum(arr,n,x);
    cout<<ans;
}