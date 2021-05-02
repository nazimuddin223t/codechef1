#include<bits/stdc++.h>
using namespace std;
typedef      long long int    ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
 ll mat[1000000][9];
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,d;
    cin>>n>>d;


    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<d; j++)
        {
            cin>>mat[i][j];
        }
    }
    ll sum=0;
    ll ans=sum;
    vector<pair<ll,pair<ll,ll> > >vp;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            sum=0;
            for(ll k=0; k<d; k++)
            {
                sum+=abs(mat[i][k]-mat[j][k]);
            }
            vp.push_back({sum,{i,j}});
        }
    }
    sort(vp.begin(),vp.end(),greater<pair<ll,pair<ll,ll> > >());
    n=vp.size();
    map<ll,ll>mp;
    sum=0;
    for(ll i=0; i<n; i++)
    {
        ll val=vp[i].first;
        ll   a=vp[i].second.first;
        ll  b=vp[i].second.second;
        if(!mp[a]||!mp[b])
        {
            sum+=val;
            mp[a]=1;
            mp[b]=1;
        }
    }

    cout<<sum<<endl;;
    return 0;

}
