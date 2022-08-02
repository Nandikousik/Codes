#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int A[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    for(int j=0;j<n;j++)
    {
        if(A[j]%2==0 && A[j]!=0)
        {
            cout<<A[j]<<" ";
        }
    }
    for(int k=0;k<n;k++)
    {
        if(A[k]==0)
        {
            cout<<A[k]<<" ";
        }
    }
    return 0;   
}