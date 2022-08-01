//O(n2)   naive solution
#include<iostream>
using namespace std;
bool checkSorted(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    int result=checkSorted(arr,n);
    cout<<result;
}