#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int autobio(int num)
{
    string s;
    int index,number,i,j,count;

    s=to_string(num);

    for(i=0;i<s.size();i++)
    {
        index=s.at(i)-'0';
        count=0;
        for(j=0;j<s.size();j++)
        {
            number=s.at(j)-'0';
            if(number==i)
            {
                count++;
            }
        }
        if(index!=count)
        {
            return 0;
        }
    }
    return 1;
}

int digitcount(int num)
{
    if(autobio(num)==1)
    {
        string s=to_string(num);
        vector<int>l;
        for(int i=0;i<s.size();i++)
        {
            int y=s.at(i)-'0';
            l.push_back(y);
        }
        set<int>se(l.begin(),l.end());
        int count=se.size();
        return count;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cin>>num;
    cout<<digitcount(num);
}