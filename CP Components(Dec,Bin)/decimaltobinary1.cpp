#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    unsigned long n;
    cin>>n;
    string str=bitset<8>(n).to_string();
    cout << "Binary Number: "<< str;
}