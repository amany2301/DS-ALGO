
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int maxSubarraySum(int arr[], int n){
        int curr=0;
       int max_no=arr[0];
       for(int i=0;i<n;i++)
       {
           
            
          curr+=arr[i];
          max_no=max(curr,max_no);
          
          if(curr<0)
           curr=0;
       }
       return max_no;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
