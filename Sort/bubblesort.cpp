#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;

    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    cout<<"After Sorting: ";

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}


// Time Complexity = Ω(n) - Best           Ω - Omega
                //   θ(n^2) -Average
                //   O(n^2) -Worst         O - Big O