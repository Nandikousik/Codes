#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string binary;
    cin>>binary;

    unsigned long decimal=bitset<8>(binary).to_ulong();
    cout<<decimal;
}

//array to number
/* for(int i=0;i<d;i++)
    {
        ans += num[i]*pow(10,i);
    }*/