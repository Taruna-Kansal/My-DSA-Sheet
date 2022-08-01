#include<iostream>
using namespace std;
int search(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"\nEnter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search"<<endl;
    cin>>x;

    int result = search(arr,n,x);
    cout<<result;
}