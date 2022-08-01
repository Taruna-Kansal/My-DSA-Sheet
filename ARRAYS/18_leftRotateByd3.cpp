// Efficient solution
// t.c = theta(d+(n-d)+n) = theta(2n)= theta(n)
// aux space = theta(1)
#include<iostream>
using namespace std;
void reverse (int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotateByD(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    cout<<"size:";
    int n;
    cin>>n;
    cout<<"Elements:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"d=";
    int d;
    cin>>d;
    leftRotateByD(arr,n,d);
    
}