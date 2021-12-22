#include<bits/stdc++.h>
using namespace std;
void stockbuysell(int arr[],int size)
{
    int min_price=INT_MAX;
    int max_profit=0;
    for(int i=0;i<size;i++)
    {
        min_price=min(min_price,arr[i]);
        max_profit=max(max_profit,arr[i]-min_price);

    }       
    cout<<max_profit;


}
int main()
{
    int arr[]={10,20,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    stockbuysell(arr,size);

}