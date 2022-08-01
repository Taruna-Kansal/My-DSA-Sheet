//O(n2)
#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        return i;
    }
    return -1;
}
int main()
{
    cout<<"Enter size=";
    int n;
    cin>>n;
    cout<<"\nEnter elements=";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int result = largest(arr,n);
   cout<<result;
}