#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++) 
    {
        mp[s[i]]++;
    }
    for(int i=0;i<s.length();i++) 
    {
        if(mp[s[i]]==1) 
        {
            cout<<s[i];
            return 0;
        }
    }
    cout<<-1;
    return 0;
}