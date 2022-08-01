//O(n)
#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    int low = 0; 
    int high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    
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
    reverseArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}