#include <bits/stdc++.h>
#include<stdlib.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    
   long long  int count=0;
   long long int current =0 ;
    for(int i=0;i<n;i++)
    {
      count=count+abs(arr[i]-current);
      current=arr[i];
    }
    
    cout<<count<<"\n";
    
    return 0;
  }
