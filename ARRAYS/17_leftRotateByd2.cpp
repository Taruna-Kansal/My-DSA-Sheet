// t.c= theta(d+(n-d)+d)  = theta(n)
// aux space = theta (d)

#include<iostream>
using namespace std;
void leftRotateByD(int arr[],int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
}
int main()
{
    cout<<"size:";
    int n;
    cin>>n;
    cout<<"Enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter places:"; 
    int d;
    cin>>d;
    leftRotateByD(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}