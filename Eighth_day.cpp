#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse(string s)
{
    string result;
    int i=0;
    int n=s.size();
    while(i<n)
    {
        while(i<n && s[i] ==' ') i++;
        if(i>=n) break;
        int j=i+1;
        while(j<n && s[j]!=' ') j++;
        string sub= s.substr(i,j-i);
        if(result.size()==0) result=sub;
        else result=sub+" "+result;
        i=j+1;
    }
    return result;
}
int main()
{
    string s=" the sky is blue";
    cout<<reverse(s);
    return 0;
    
}