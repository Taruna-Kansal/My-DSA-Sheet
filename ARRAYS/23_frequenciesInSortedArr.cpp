#include<iostream>
using namespace std;
void countfreq(int arr[], int n)
{
    int freq=1, i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq;
        i++;
        freq=1;
    }
    if(arr[n-1]!=arr[n-2] || n==1)
    {
        cout<<arr[n-1]<<" 1";
    }
}
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    cout<<"Enter elments";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countfreq(arr,n);
}