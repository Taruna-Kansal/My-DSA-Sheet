#include<iostream>
using namespace std;
void leftRotate(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
        
    }
    arr[n-1]=temp;
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
    leftRotate(arr,n);
}