// naive solution
// t.c = O(x^1/2)
// s.c=O(1)
#include<iostream>
using namespace std;
int sqRootFloor(int x)
{
    int i=1;
    while(i*i<=x)
    {
        i++;
    }
    return (i-1);
}
int main()
{
    int x;
    cout<<"Enter the element";
    cin>>x;
    int ans=sqRootFloor(x);
    cout<<"Square root of "<<x<<" is "<<ans;
}