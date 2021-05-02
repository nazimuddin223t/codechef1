
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<ll>v;
        cin>>n;
        ll a,b,c;
        ll ans=0;
        ll mx=0,cnt=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll ans1=INT_MAX;

        for(ll i=0; i<n; i++)
        {

            mx=v[i];
            ll sm=0;
            a=v[i];
            cnt=1;
            for(ll j=0; j<i; j++)
            {
                if(v[j]>v[i])
                {
                   mx=max(v[j],mx);
                }
            }
            ll f=0;
            ll mn=a;
            for(ll j=i+1; j<n; j++)
            {
                if(v[j]<mx)
                {
                   cnt++;
                   mn=min(mn,v[j]);
                }
            }
            for(ll j=0; j<i; j++)
            {
                if(v[j]>mn)
                {
                  cnt++;
                }
            }
            ans1=min(ans1,cnt);
            ans=max(ans,cnt);
        }
        cout<<ans1<<" "<<ans<<endl;
    }
    return 0;
}

