#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000010][25];
ll dp1[1000010][25];
void build(ll n)
{
    for(ll j=1; j<=25; j++)
        for(ll i=0; i+(1<<j)<=n; i++)
            dp[i][j]=min(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);

    for(ll j=1; j<=25; j++)
        for(ll i=0; i+(1<<j)<=n; i++)
            dp1[i][j]=max(dp1[i][j-1],dp1[i+(1<<(j-1))][j-1]);
}
int main()
{
    ll n,m;
    cin>>n;
    ll Log[n+10];
    Log[1]=0;
    Log[0]=0;
    for(ll i=2; i<=n; i++)
        Log[i]=Log[(i/2)]+1;
    for(ll i=0; i<n; i++)
    {
        cin>>dp[i][0];
        dp1[i][0]=dp[i][0];
    }
    build(n);
    cin>>m;
    ll l,r;
    double a,b,c,d;
    ll r1,l1;

    for(ll i=0; i<m; i++)
    {
        double res=0.0;
        cin>>l>>r;
        ll ind=Log[r-l+1];
        a=min(dp[l][ind],dp[r-(1<<ind)+1][ind]);
        b=max(dp1[l][ind],dp1[r-(1<<ind)+1][ind]);
        res=a+(double)((b-a)/2.0);
        l1=l-1;
        if(l1>=0)
        {
            ind=Log[l1+1];
            c=max(dp1[0][ind],dp1[l1-(1<<ind)+1][ind]);
            res=max(res,c+a);
        }

        l1=r+1;
        r1=n-1;
        if(l1<n)
        {
            ind=Log[r1-l1+1];
            d=max(dp1[l1][ind],dp1[r1-(1<<ind)+1][ind]);;
            res=max(res,d+a);
        }

      //  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        cout<<fixed<<setprecision(1)<<res<<endl;

    }
}

