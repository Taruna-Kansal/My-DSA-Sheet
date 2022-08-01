#include<iostream>
using namespace std;
int majorityElement(int arr[], int n)
{
    int res = -1;
    for(int i=0;i<n;i++)
    {
        int count = 1;
        for(int j=1;j<n;j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if(count>n/2)
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = majorityElement(arr,n);
    cout<<"index of majority element is "<<ans;
}