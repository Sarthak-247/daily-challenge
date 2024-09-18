#include <iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<string>> group_anagrams(vector<string>& str)
{
    unordered_map<string,vector<string>> anagrams;
    for(const auto& st:str){
        string str_sort=st;
        sort(str_sort.begin(),str_sort.end());
        anagrams[str_sort].push_back(st);
    }
    vector<vector<string>> result;
    for(const auto& pair:anagrams){
        result.push_back(pair.second);
    }
    return result;
}
int main()
{
    vector<string> str={"eat","tea","ate","tan","nat","bat"};
     vector<vector<string>> result=group_anagrams(str);
     for(const auto& group : result){
         for(const auto& str:  group)
         {
             cout<<str<<" ";
         } cout<<endl;
     }

    return 0;
}