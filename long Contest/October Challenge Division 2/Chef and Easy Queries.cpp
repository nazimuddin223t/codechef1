
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,k,y;
        ll f=1;
        cin>>n>>k;
        ll a;
        ll sum=0,res=1;
        for(ll i=0;i<n;i++)
        {
              cin>>a;
              sum+=a;
               if(sum<k&&f)
               {
                     res=i+1;
                     f=0;
               }
              sum-=k;
        }
        if(f&&sum>=k)
        {
              res=n+(sum/k);
              res++;
        }
        cout<<res<<endl;

    }
    return 0;
}
