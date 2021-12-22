#include<bits/stdc++.h>
using namespace std;

int max_difference(int arr[],int size)
{
    int res=arr[1]-arr[0];
    int minval=arr[0];

    for(int i=1;i<size;i++)
    {
      res=max(res,arr[i]-minval);
      minval=min(minval,arr[i]);
    }

  
   return res;

}

int main()
{
    int arr[]={10,8,30,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<max_difference(arr,size);

    return 0;
}