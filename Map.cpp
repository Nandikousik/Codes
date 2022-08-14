#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    string s="";
    for (int i = 0; i < n; i++) 
    {
        s = s + A[i];
    }

    map<char,int>freq;

    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
    }

    vector<int>l;
    for(auto it:freq)
    {
        l.push_back(it.second);
    }

    vector<int>m;
    for(int i=0;i<l.size();i++)
    {
        if(l[i]%2!=0)
        {
            m.push_back(l[i]);
        }
    }

    int k=m[0];

    vector<char>ch;

    for(auto it:freq)
    {
        if(it.second==k)
        {
            ch.push_back(it.first);
        }
    }

    char c=ch[0];

    cout<<c<<endl;
    return 0;

}