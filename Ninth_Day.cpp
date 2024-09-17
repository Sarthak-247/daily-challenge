#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string prefix(vector<string>& s)
{
    string result;
    sort(s.begin(),s.end());
    string first,last;
    first =s.front();
    last=s.back();
    int i=0;
    int n=min(first.size(),last.size());
    while(i<n && first[i]==last[i] ) i++;
    return first.substr(0,i);
    
}
int main()
{
    vector<string> s={"flower","flow","flight"};
    cout<<"longest prefix is:"<<prefix(s);
    return 0;
}