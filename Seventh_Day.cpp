#include<iostream>
using namespace std;
int bucket(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i+1]!=0)
        {
            count+=1;
        }
    }
    return count;
}
int main()
{
    int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int result=bucket(a,n);
    cout<<result;
}