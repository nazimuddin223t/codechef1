#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,res=0;
        cin>>n;
        ll mul=(n*(n+1))/2LL;
        if(mul%2||n<3)
        {
            cout<<0<<endl;
        }
        else
        {
            ll i,j=1,k=0;
            ll cnt=0;
            mul/=2LL;
            ll l=1,r=n,res=0;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                k=(mid*(mid+1))/2;
                if(k==mul)
                {
                    res=mid;
                    break;
                }
                else if(k>mul)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                    res=mid;
                }
            }
            j=res;
            k=(j*(j+1))/2LL;
            res=0;
            if(k==mul)
            {
                k=j-1;
                res+=(k*(k+1))/2;
                ll d=n-(j+1);
                res+=(d*(d+1))/2;
                // res++;
            }
            res+=(n-j);
            cout<<res<<endl;
        }
    }
    return 0;
}
