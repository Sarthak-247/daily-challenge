#include<iostream>
#include<vector>
using namespace std;
void Sum_zero(int a[],int n)
{
    vector<pair<int,int>>result;
    for(int i=0;i<n;i++)
    {
        if(a[i]+a[i+1]==0)
        {
           result.push_back({i,i+1});
        }
        else if(a[i]+a[i+1]+a[i+2]==0)
        {
           result.push_back({i,i+2});
        }
    }
    for(auto p:result)
    {
        cout<<p.first<<","<<p.second<<endl;
    }
}
int main()
{
    int a[]={1,2,-3,3,-1,2};
    int n=sizeof(a)/sizeof(a[0]);
    Sum_zero(a,n);
}