#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin>>t;

    while( t--)
    {
        ll n,m,i,j,k;
        cin>>n>>m;
        ll value[n+10];
        for(i=0; i<n; i++)
        {
            cin>>value[i];
        }
        ll mat[n+10][m+10];
        ll val;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>val;
                value[i]+=val;
                mat[i][j]=value[i];
            }
        }
        ll Rank[n+10][m+10];
        for(j=0; j<m; j++)
        {
            pair<ll,ll>p[n+10];
            for(i=0; i<n; i++)
            {
                p[i]=make_pair(mat[i][j],i);
            }
            sort(p,p+n);
            reverse(p,p+n);
            ll r=1;
            for(i=0; i<n; i++)
            {
                if(i>0&&p[i-1].first>p[i].first)
                    r=i+1;
                Rank[p[i].second][j]=r;
            }

        }
        ll ans=0;
        ll a,b;
        for(i=0; i<n; i++)
        {
            ll bv=0,bvp=0,bpv=INT_MAX,bp=0;

            for(j=0; j<m; j++)
            {
                a=Rank[i][j];
                // cout<<a<<" ";
                b=mat[i][j];
                if(a<bpv)
                {
                    bpv=a;
                    bp=j;
                }
                if(b>bv)
                {
                    bv=b;
                    bvp=j;
                }

            }
            if(bp!=bvp)
                ans++;

        }
        cout<<ans<<endl;

    }
}
