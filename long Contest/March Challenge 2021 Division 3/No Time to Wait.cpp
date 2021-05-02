#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n,m,x;
      cin>>n>>m>>x;
      ll f=0;
      ll a;
      for(ll i=0;i<n;i++)
      {
            cin>>a;
            if(x+a==m)
                  f=1;
      }
      if(f)
            cout<<"Yes"<<endl;
      else
            cout<<"No"<<endl;

}


