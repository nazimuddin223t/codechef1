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
        cin>>n;
        ll mat[n+10][n+10];
        ll a,b,c;
        ll ans=0;
        for(ll i=1; i<=n; i++)
            for(ll j=1; j<=n; j++)
                cin>>mat[i][j];
        for(ll i=n; i>=1; i--)
        {
            for(ll j=n; j>i; j--)
            {
                a=(i-1)*n+j;
                if(mat[i][j]!=a)
                {
                    for(ll k=1; k<=i; k++)
                        for(ll l=k+1; l<=j; l++)
                        {
                            swap(mat[k][l],mat[l][k]);
                        }
                        ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

