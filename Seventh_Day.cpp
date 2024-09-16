#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trap_water(vector<int>& height)
{
    int n=height.size();
    if(n==0)    return 0;
    vector<int> leftmax(n),rightmax(n);
    leftmax[0]=height[0];
    for(int i=0;i<n;i++)
    {
        leftmax[i]=max(leftmax[i-1],height[i]);
    }
    rightmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i]=max(rightmax[i+1],height[i]);
    }
    int trap_water_unit=0;
    for(int j=0;j<n;j++)
    {
        trap_water_unit+= min(leftmax[j], rightmax[j])- height[j];
    }
    return trap_water_unit;
}
int main()
{
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap_water(height);
    return 0;
}
