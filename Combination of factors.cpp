#include <bits/stdc++.h>
  using namespace std;
  void solve(int n, int p, string str)
  {
    if(n==1)
    {
      cout<<" "<<str;
      cout<<endl;
    } 
      else
      {
         for(int i=p;i<=n;i++)
         {
           if(n%i==0)
           solve(n/i,i,str + " " +to_string(i) );
           
         }
        
      }
      
      
   // }
    
    
    
  }
  
  
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n,2,"1 ");
      
     // cout<<endl;
    }
    
    return 0;
  }
