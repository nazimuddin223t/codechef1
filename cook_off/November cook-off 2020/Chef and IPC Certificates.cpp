#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll cnt=0;
      ll n,m,k,a;
      cin>>n>>m>>k;
      for(ll i=1;i<=n;i++)
      {
            ll sum=0;
            for(ll j=0;j<k;j++)
            {
                  cin>>a;

                  sum+=a;

            }
            ll l;
            cin>>l;
            if(sum>=m&&l<=10)
                  cnt++;
      }
      cout<<cnt<<endl;
      return 0;
}
