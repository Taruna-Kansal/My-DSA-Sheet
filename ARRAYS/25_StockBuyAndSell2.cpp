//t.c=O(n)
//efficient solution 
#include<iostream>
using namespace std;
int maxProfit(int arr[ ], int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit += (arr[i]-arr[i-1]);
        }
    }
    return profit;
}
int main()
{
    int arr[7]={1,2,3,45,2,5,13};
    int ans = maxProfit(arr,7);
    cout<<ans;
}