#include<iostream>
using namespace std;
bool equilibrium(int arr[],int size)
{
    int sum=0,l_sum=0,r_sum=0,point=0;

    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<size;i++)
    {
    if(l_sum==sum-arr[i])
          return true;
       l_sum=l_sum+arr[i];
       sum=sum-arr[i];        

    }
    return false;

}
int main()
{
    int arr[]={4,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<equilibrium(arr,size);
}