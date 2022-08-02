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

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
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


// Time Complexity = Ω(n^2) - Best           Ω - Omega
                //   θ(n^2) -Average
                //   O(n^2) -Worst         O - Big O