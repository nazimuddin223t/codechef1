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
            ll cnt=1;
            while(cnt*2<=n)
            {
                  cnt*=2;
            }
            if(cnt!=1)
            cnt--;
            m=n^cnt;
            cout<<m*cnt<<endl;



      }
}
