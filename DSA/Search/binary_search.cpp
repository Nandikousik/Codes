//Binary Search-Array should be sorted.
//We have to sort it first then we can apply binary search.
//Use devide and conquer rule.
//mid=(first+last)/2;
//Case1:data==a[mid]
//Case2:data<a[mid]
//Case3:data>a[mid]
//Time complexity=o(logn)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int array[],int num,int left,int right)
{
    if(right>=left)
    {
        int mid=left+(right-left)/2;
        if(array[mid]==num)
        {
        return mid;
        }
        if(array[mid]>num)
        {
        return binarysearch(array,num,left,mid-1);
        }
        if(array[mid]<num)
        {
        return binarysearch(array,num,mid+1,right);
        }
    }
    return -1;
}
int main(void)
{
    int n,num;
    cin>>n;
    int array[100];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cin>>num;
    int left = 0;
    int right=n-1;
    int result = binarysearch(array,num,0,n-1);
    if(result=-1)
    {
    cout<<"Not Found";
    }
    else
    {
    cout<<"Element found in "<<result;
    }
}