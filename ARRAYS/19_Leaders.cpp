// t.c= O(n2)
#include<iostream>
using namespace std;
void leaders(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<arr[i]<<" ";
        }
    }
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
    leaders(arr,n);
}