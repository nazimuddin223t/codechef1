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
            vector<ll>v;
            cin>>n;
            ll a,b,c;
            ll ans=0;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  v.push_back(a);

            }
           sort(v.begin(),v.end());
           a=0;
            for(ll i=0;i<n;i++)
            {
                  if(a<v[i])
                  {
                        a=v[i];
                        ans++;
                  }

            }
            cout<<ans<<endl;
      }
      return 0;
}

