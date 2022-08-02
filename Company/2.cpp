#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<char>l;

    for(int i=0;i<s.size();i++)
    {
        int y=(int)s[i];
        if(y>=97 && y<=122)
        {
            l.push_back(s[i]);
        }
        else if(y>=49 && y<=57)
        {
            int k=(int)s[i]-49;
            for(int j=0;j<k;j++)
            {
                l.push_back(s[i-1]);
            }

        }
    }

    int m;
    cin>>m;

    string str(l.begin(),l.end());

    cout<<str.at(m-1)<<endl;
    return 0;



}