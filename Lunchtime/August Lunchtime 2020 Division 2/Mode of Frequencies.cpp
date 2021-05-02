
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
        set<ll>st;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
            st.insert(a);
        }
        ll mx=0;
        set<ll>::iterator it;
        map<ll,ll>freq;
        vector<ll>vp;
        for(it=st.begin(); it!=st.end(); it++)
        {
              a=mp[*it];
            freq[a]++;
            if(freq[a]>mx)
            {
                  mx=freq[a];
                  b=a;
            }
            else if(mx==freq[a])
            {
               b=min(b,a)   ;
            }
        }
        cout <<b<<endl;
    }
    return 0;
}
