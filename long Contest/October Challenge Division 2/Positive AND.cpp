
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
        ll f=1;
        cin>>n;
        ll a=2;
        ll sum=2;
        vector<ll>v;
        if(n==1)
        {
              cout<<1<<endl;
              continue;
        }

        for(ll i=1; i<=n; i++)
        {
            v.push_back(i);
            if(a+1==i)
                swap(v[i-1],v[i-2]);
            if(sum<=i)
            {
                a=sum;
                sum*=2;
            }

        }
        if(n*2==sum)
        {
            cout<<-1<<endl;
        }
        else
        {
             swap(v[0],v[2]);
            for(ll i=0; i<n; i++)
            {
               cout<<v[i]<<" ";
            //   cout<<v[i-1]<< " &"<<v[i]<<" "<<(v[i-1]&v[i])<<endl;

            }
            cout<<endl;

        }

    }
    return 0;
}

