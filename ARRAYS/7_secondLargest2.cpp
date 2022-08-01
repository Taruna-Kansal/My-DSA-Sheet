//O(n)
#include<iostream>
using namespace std;
int secondLargest(int arr[],int n)
{
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            // largest=i;
            // res=largest;
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[largest])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    cout<<"Enter size";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    int ans=secondLargest(arr,n);
    cout<<"Second largest element is "<<ans;

}