#include<iostream>
#include<algorithm>
using namespace std;
void merge_arr(int a[],int m,int b[],int n)
{
    int d=n+m;
    int c[d];
    for (int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int j=0;j<n;j++)
    {
       c[m + j] = b[j];

    }
    sort(c,c+d);
    for(int i=0;i<m;i++)
    {
        a[i]=c[i];
    }
    for(int j=0;j<n;j++)
    {
        b[j]=c[m + j];
    }
}
void print(int a[],int b[],int m, int n)
{
    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<b[j]<<" ";
    }
}
int main()
{
    int a[]={1,3,5,7};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={2,4,6,8};
    int n=sizeof(b)/sizeof(b[0]);
    merge_arr(a,m,b,n);
    print(a,b,m,n);
    return 0;
}