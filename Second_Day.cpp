#include <iostream>
using namespace std;
int missing_num(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            return i+1;
            break;
        }
    }
}
int main()
{
    int a[]={1,2,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int r=missing_num(a,n);
    cout<<r;
    return 0;
}