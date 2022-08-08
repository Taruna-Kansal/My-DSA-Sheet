//efficient solution
//t.c=O(log x)
//s.c=O(1)
#include<iostream>
using namespace std;
int sqRootFloor(int x)
{
    int low=1, high=x, ans=-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        int midSq = mid*mid;
        if(midSq == x)
        {
            return mid;
        }
        else if(midSq > x)
        {
            high = mid -1;
        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main()
{
    int x;
    cout<<"Enter the element";
    cin>>x;
    int ans=sqRootFloor(x);
    cout<<"Square root of "<<x<<" is "<<ans;
}