#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;

        cin>>n;
        ll i,j,k;
        ll a,b;
        vector<ll>v;
        map<ll,ll>mp;
        ll cnt=0,mx=0;
        for(i=0; i<n; i++)
        {
            cin>>a;

            if(a==0)
                cnt++;
            else if(cnt>0)
            {
                mx=max(cnt,mx);
                mp[cnt]++;
                 v.push_back(cnt);
                cnt=0;
            }
        }
        // cout<<mp[mx]<<endl;
        a=mx/2;
        if(mx%2==1&&mp[mx]==1)
        {
            ll f=1;
            for(i=0; i<v.size(); i++)
            {
                b=v[i];
                if(b!=mx&&b>a)
                {
                    f=0;
                    cout<<"No"<<endl;
                    break;
                }

            }
            if(f)
                cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
