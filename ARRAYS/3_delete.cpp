#include<iostream>
using namespace std;
int deleteele(int arr[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        break;
    }
    if(i==n)
    return n;
    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
}
int main()
{
    cout<<"size=";
    int n;
    cin>>n;
    cout<<endl<<"elements=";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter element to delete";
    int x;
    cin>>x;
    int result = deleteele(arr,n,x);
    cout<<endl<<result;
}