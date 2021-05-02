#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mp[4050][4050];
vector<ll>v;
ll f,k,n;
ll recur(ll ind,ll sum,ll sum2,ll cnt)
{
    if(ind>=n)
    {

        if(sum<=0&&sum2<=0)
        {
            f=1;
            return cnt;
        }
        return  LONG_LONG_MAX;
    }
    if(sum<=0&&sum2<=0)
    {
        f=1;
        return cnt;
    }
    if(sum>=0&&mp[ind][sum]!=-1)
        return mp[ind][sum];

    ll  res=LONG_LONG_MAX;
    if(sum>0)
        res=recur(ind+1,sum-v[ind],sum2,cnt+1);
    if(sum2>0)
        res=min(recur(ind+1,sum,sum2-v[ind],cnt+1),res);
    if(sum<0)
        sum=0;
    mp[ind][sum]=res;
    return res;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        memset(mp,-1,sizeof(mp));
        cin>>n>>k;
        v.clear();
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        f=0;
        sort(v.begin(),v.end(),greater<ll>());
        a=recur(0,k,k,0);
        if(f)
            cout<<a<<endl;
        else
            cout<<-1<<endl;

    }
}
