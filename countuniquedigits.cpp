#include<iostream>
using namespace std;
 
int main(){ 
	int A[10]={0}; 	 
	int n;
    cin>>n; 
	 
	while(n) 
	{ 
		A[n%10]++; 
		n = n/10;
	} 
	 
	for(int i = 0; i < 10; i++) 
	{ 
		if(A[i] > 0)  
		{ 
			cout << i << " is repeated " << A[i] << " times" << '\n'; 
		} 
	} 
} 