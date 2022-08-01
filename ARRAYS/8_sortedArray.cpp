//O(n)   efficient approach
#include<iostream>
using namespace std;
int checkSorted(int arr[], int n)
{
    bool flag =true;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>arr[i+1])
        {
            flag=false;
            
        }
    }
    return flag;
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
    int result = checkSorted(arr,n);
    cout<<result;
}