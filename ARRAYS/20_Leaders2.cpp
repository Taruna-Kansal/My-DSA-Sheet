#include<iostream>
using namespace std;
void Leaders(int arr[], int n)
{
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";
    for(int i= n-2; i>=0; i--)
    {
        if(arr[i]>curr_leader)
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
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
    Leaders(arr,n);
}