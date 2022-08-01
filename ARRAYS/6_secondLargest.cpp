//O(n2)
#include<iostream>
using namespace std;
int largestEle(int arr[], int n)
{
    int largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
        }
    }
    return largest;
}
int secondLargest(int arr[],int n)
{
    int largest=largestEle(arr,n);
    int res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
            {
                res=i;
            }
            else if(arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    cout<<"size=";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = secondLargest(arr,n);
    cout<<result;
}