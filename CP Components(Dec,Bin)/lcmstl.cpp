#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int m=(a*b)/__gcd(a, b); //LCM
    cout<<m<<endl;
    
}