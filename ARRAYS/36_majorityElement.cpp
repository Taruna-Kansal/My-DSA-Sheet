#include<iostream>
using namespace std;
int majorityElement(int arr[],int n)
{
    int res=0;
    int count = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else
        count--;
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
    }
    if(count<=n/2)
    {
        res=-1;
    }
    return res;

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