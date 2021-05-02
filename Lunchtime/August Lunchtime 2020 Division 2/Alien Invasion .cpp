#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;

    while( t--)
    {
        ll n;
        double m;
        ll i,j,k;
        cin>>n>>m;
        long double value[n+10];
        for(i=0; i<n; i++)
        {
            cin>>value[i];
        }
        long double l,r,ans=0;
        sort(value,value+n);
        l=0,r=1e12 ;
        while(l<=r)
        {
            ll mid=(r+l)/2;
            long double s=value[0];
            ll f=1;
            for(ll i=1; i<n; i++)
            {
                  double nxt=s+mid;
                if(value[i]<=nxt&&value[i]+m>=nxt)
                {
                    s=nxt;
                }
                else if(value[i]>nxt)
                    s=value[i];
                else
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;

        }
        l=ans,r=ans+1;
        while(l<=r)
        {
            long double mid=(r+l)/2.0;
            long double s=value[0];
            ll f=1;
            for(ll i=1; i<n; i++)
            {
                  long double nxt=s+mid;
                if(value[i]<=nxt&&value[i]+m>=nxt)
                {
                    s=nxt;
                }
                else if(value[i]>nxt)
                    s=value[i];
                else
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                ans=mid;
                l=(mid+0.0000001);
            }
            else
                r=(mid-0.0000001);

        }

        cout<<setprecision(9)<<fixed<<ans<<endl;


    }
}
