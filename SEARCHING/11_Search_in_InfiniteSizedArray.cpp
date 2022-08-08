//naive solution
// t.c = O(position)
#include<iostream>
using namespace std;
int search(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)
        return i;
        
        if(arr[i]>x)
        return -1;

        i++;
    }
}
int main()
{
    //here n will be infinite
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element";
    cin>>x;
    
    int ans = search(arr,x);
    cout<<ans;
}