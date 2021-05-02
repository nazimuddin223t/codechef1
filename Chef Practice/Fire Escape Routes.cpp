#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[1000010];
ll In[1000010];
ll Out[1000010];
ll visit[1000010];
ll timer=0;
void dfs(ll u)
{
    visit[u]=1;
    timer++;
    for(ll i=0; i<adj[u].size(); i++)
    {
        ll v=adj[u][i];
        if(visit[v])
            continue;
        dfs(v);

    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll a,b;
        cin>>n>>m;
        for(ll i=0; i<=n; i++)
        {
            adj[i].clear();
            visit[i]=0;
        }
        for(ll i=0; i<m; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        ll comp=0;
        ll res=1;
        ll mod=1e9+7;
        for(ll i=1; i<=n; i++)
        {
            timer=0;
            if(visit[i])
                continue;
            comp++;
            dfs(i);
            res=(res*timer)%(mod);
            res%=mod;

        }
        cout<<comp<<" "<<res<<endl;
    }

    return 0;
}


