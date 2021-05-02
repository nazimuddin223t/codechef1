
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p,k,x,a;
        ll f=1;
        cin>>n>>x>>p>>k;
        vector<ll>v;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if((v[p-1]<x&&p<k)||(v[p-1]>x&&p>k))
        {
            cout<<-1<<endl;
            continue;
        }
        if(v[p-1]==x)
        {
            cout<<0<<endl;
            continue;
        }
        ll up=0,low=n+1;
        ll l=0;
        ll r=n-1,i;
        for(i=0; i<n; i++)
        {
            if(v[i]<=x)
                up=i+1;
        }
        for(i=n-1; i>=0; i--)
        {
            if(v[i]>=x)
                low=i+1;
        }
        if(p>k)
        {
            cout<<low-p<<endl;
        }
        else if(p<k)
        {
            cout<<p-up<<endl;
        }
        else if(v[p-1]<x)
        {
            cout<<low-p<<endl;
        }
        else
            cout<<p-up<<endl;
    }
    return 0;
}


