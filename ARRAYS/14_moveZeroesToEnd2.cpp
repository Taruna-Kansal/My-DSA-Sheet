//efficient sol - O(n)
#include<iostream>
using namespace std;
void moveZeroesToEnd(int arr[], int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
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