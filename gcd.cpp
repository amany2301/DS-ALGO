#include<bits/stdc++.h>
using namespace std;

//using modular method

int gcdnum(int a,int b)
{
    int m;
    if(a==0)
        return b;

    if(b==0)
        return a;

    m=a%b;
    if(a%b!=0)
       { 
        a=b;
        b=m;
        gcdnum(a,b);
       }
    return b;



}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcdnum(a,b);
    return 0; 
}
