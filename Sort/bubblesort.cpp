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
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]); //Though last element is already sorted in every iteration.
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