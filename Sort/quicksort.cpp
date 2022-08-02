//divide and conquer technique

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int A[],int lb,int ub)          //lb=lower bound,ub=upper bound
{
    int pivot=A[lb];
    int start=lb;
    int end=ub;

    while(start<end)
    {
        while(A[start]<=pivot)
        {
            start++;
        }
        while(A[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(A[start],A[end]);
        }
    }
    swap(A[lb],A[end]);
    return end;
}


void quicksort(int A[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);
    }
}

void display(int A[],int n)
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
    quicksort(A,0,n-1);
    cout<<"Array after sorting:";
    display(A,n);

}