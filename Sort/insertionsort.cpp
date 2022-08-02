#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int A[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=A[i];
        int j=i-1;

        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
}

void display(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int A[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Array before sorting:";
    display(A,n);
    insertionsort(A,n);
    cout<<"Array after sorting:";
    display(A,n);
}


// Time Complexity = Ω(n) - Best           Ω - Omega
                //   θ(n^2) -Average
                //   O(n^2) -Worst         O - Big O