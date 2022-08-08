// t.c=O(n)
// aux space=O(n)
#include<iostream>
using namespace std;
int getRepeatedElement(int arr[],int n)
{
    bool visited[n]={false};
    for(int i=0;i<n;i++)
    {
        if(visited[arr[i]])
        return arr[i];
        visited[arr[i]]=true;
    }
}
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=getRepeatedElement(arr,n);
    cout<<ans;
}