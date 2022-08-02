#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    int A[100];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<n-1;i++) 
    {
        for(int j=0;j<n-1-i;j++) //n-1-i because in every step no need to compare everything.
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
    return 0;
}