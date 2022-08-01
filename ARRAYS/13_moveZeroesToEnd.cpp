//naive solution - O(n2)
#include<bits/stdc++.h>
using namespace std;
void moveZeroesToEnd(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    cout<<"Enter size : ";
    int n;
    cin>>n;
    cout<<"Enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    moveZeroesToEnd(arr,n);
}