#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    vector<int>l(A,A+n); //it is not required.

    string s;
    for (int i = 0; i < n; i++)
    {
        // concatenation of string
        s += to_string(l[i]);
    }

    long int k=stoi(s);
    cout<<k;
    
    return 0;
}