#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<char>l;

    for(int i=1;i<s.size();i+=2)
    {
        int y=(int)s[i]-48;
        for(int j=0;j<y;j++)
        {
            l.push_back(s[i-1]);
        }
    }

    int m;
    cin>>m;

    string str(l.begin(),l.end());

    cout<<str.at(m-1)<<endl;
    return 0;



}