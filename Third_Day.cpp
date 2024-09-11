#include<iostream>
using namespace std;
int rep_num(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                return a[j];
                break;
            }
        }
    }
}
int main()
{
    int a[]={3,1,3,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    int r=rep_num(a,n);
    cout<<r;
}