#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,k,y;
        cin>>n>>k>>x>>y;
        map<ll,ll>mp;
        if(k==0)
        {
            if(x==y)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }

        ll i,j;
        ll f=0;
        i=x;
        while(1)
        {
            i%=n;
            if(i==y)
            {
                f=1;
                break;
            }
            mp[i]=1;
            i+=k;
            if(mp[i])
                break;
            mp[i]=1;

        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
