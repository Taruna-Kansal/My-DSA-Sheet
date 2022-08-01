#include<iostream>
using namespace std;
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(cap==n)
    {
        return n;
    }
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    for(int i=0;i<cap;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    cout<<"Enter capacity="<<endl;
    int cap;
    cin>>cap;
    cout<<"size="<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Elements="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter position"<<endl;
    int p;
    cin>>p;
    cout<<"Enter element"<<endl;
    int ele;
    cin>>ele;
    insert(arr,n,ele,cap,p);
   
}