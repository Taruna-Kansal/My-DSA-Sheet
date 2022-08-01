#include<iostream>
using namespace std;
int maxCons1s(int arr[], int n)
{
    int res = 0, curr=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==0)
        {
            curr=0;
        }
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[9]= {1,0,1,1,1,1,0,1,1};
    int ans = maxCons1s(arr,9);
    cout<<ans;
}