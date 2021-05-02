#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,d;
        vector<ll>v;
        cin>>n>>k>>d;
        ll a,sum=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
        }
        sum=sum/k;
        if(sum>d)
            sum=d;
        cout<<sum<<endl;
    }
}
