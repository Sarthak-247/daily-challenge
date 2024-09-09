#include <iostream>
using namespace std;
void sort(int a[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            low++,mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
}
int main()
{
    int a[]={0,1,2,1,0,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted Array:";
    for (int i= 0 ;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
   cout<< endl;
    sort(a,n);
    cout<<"Sorted Array:";
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}