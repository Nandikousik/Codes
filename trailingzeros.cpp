#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}*/

int trailing(int n)
{
    int count=0;
    for(int i=5;n/i>=1;i=i*5)
    {
        count=count+n/i;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<trailing(n);
}
