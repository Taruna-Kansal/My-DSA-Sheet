//t.c=O(n2)
//naive solution
#include<iostream>
using namespace std;
int maxProfit(int arr[],int start,int end)
{
    if(end<=start)
    {
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1; j<=end;j++ )
        {
            if(arr[j]>arr[i])
            {
                int curr_profit=(arr[j]-arr[i])+maxProfit(arr,start,i-1)+maxProfit(arr,j+1,end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}
int main()
{
    int arr[7]={1,2,34,5,2,13,14};
    int ans = maxProfit(arr,0,4);
    cout<<ans;
} 

