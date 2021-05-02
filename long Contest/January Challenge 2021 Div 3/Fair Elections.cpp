#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll res=0;
        cin>>n>>m;
        vector<ll>v;
        vector<ll>v1;
        ll a,sum=0,sum1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        for(ll i=0; i<m; i++)
        {
            cin>>a;
            v1.push_back(a);
            sum1+=a;
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end(),greater<ll>());
        ll mn=min(n,m);
        for(ll i=0; i<mn; i++)
        {
            if(sum<=sum1)
            {
                sum-=v[i];
                sum1+=v[i];
                sum+=v1[i];
                sum1-=v1[i];
                res++;
            }
            else
                  break;
        }
        if(sum>sum1)
            cout<<res<<endl;
        else
            cout<<-1<<endl;



    }
}
