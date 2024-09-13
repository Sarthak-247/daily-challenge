#include<iostream>
using namespace std;
void leader(int a[],int n)
{
    int leader=a[n-1];
    cout<<leader<<" ";
    int l[n];
    int j=0;
    for (int i=n-2;i>=0;i--)
    {
        if(a[i]>leader)
        {
            leader=a[i];
            l[j]=leader;
            j++;
            
        }
    }
    for(int k=0;k<j;k++)
    {
        cout<<l[k]<<" ";
    }
}
int main()
{
    int a[]={16,17,4,3,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    leader(a,n);
}