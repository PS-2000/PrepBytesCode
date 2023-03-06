#include<bits/stdc++.h> 

using namespace std; 

// Function to calculate the 
// product of the array 
int multiply(int array[], int n) 
{ 
	int pro = 1; 
	for (int i = 0; i < n; i++) 
		pro = pro * array[i]; 
	return pro; 
} 

// Driver Code 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	  int array[100];
	  int n;
	  cin>>n;
	 for(int i =0;i<n;i++)
	   {
	     cin>>array[i];
	     
	   }
	 cout<< multiply( array, n)<<endl ;
	}
	return 0;
} 
