#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        ll cnt=0;
        vector<ll>v;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<n; i++)
        {
              a=i+1;
            if(v[i]<=a)
            {
                cnt+=(a-v[i]);
            }
            else
            {
                  cnt=0;
                  break;
            }
        }
        if(cnt%2)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;



    }
}

