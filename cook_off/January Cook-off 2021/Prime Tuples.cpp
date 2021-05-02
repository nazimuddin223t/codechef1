#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define P pair<int,int>
#define fi first
#define se second
#define MP make_pair
//double pi = 2*acos(0.0);
pair<ll,ll>p;
queue<pair<ll,ll> >qp;
ll dx[]= {1,-1,0,0};
ll dy[]= {0,0,1,-1};
//freopen("OutPut.text","w",stdout);
vector<ll>v;
ll ar[10000010];
ll ind[10000010];
void sive()
{
      ll i,j,k;
      ll c=0;
      for(i=2;i*i<=1e6;i++)
      {
            if(ar[i])
                  continue;

             for(j=i+i;j<=1e6;j+=i)
                  ar[j]=1;
      }
      v.push_back(2);
      c++;
      for(ll i=3;i<=1e6;i++)
      {
            if(!ar[i])
            {
                  ind[i]=c;
                  c++;


                v.push_back(i);
            }
            else
            {
                  ind[i]=c-1;
            }

      }
}
int main()
{
      ll t;
      cin>>t;
      sive();
      while(t--)
      {
            ll n;
            cin>>n;
            ll res=0;
            //cout<<v[ind[n]]<<endl;
            for(ll j=ind[n];j>=2;j--)
            {
                  ll a=v[j];
                  for(ll i=0;;i++)
                  {
                        ll c=a-v[i];
                        if(c<=v[i]||v[i]>=a)
                              break;
                        if(ar[c]==0)
                              res++;
                  }
            }
            cout<<res<<endl;
      }
}
