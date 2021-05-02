#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum=0,f=0;
ll c1(ll n1,ll m, ll val)
{
    if(m>0)
    {
        ll mn=min(m,n1);
        sum+=(val*mn);
        m-=mn;
        //cout<<m<<" <- m  "<<sum<<" <-sum  "<<val<<endl;
    }
    if(m==0)
        f=1;
    return m;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        f=0;
        ll n,m;
        ll a,b,c,e,h;
        ll e1,h1;
        ll res=LONG_LONG_MAX;
        ll n1,n2,n3;
        cin>>n>>e>>h>>a>>b>>c;

        m=n;
        e1=e,h1=h;
        n1=e1/2;
        e1=e1%2;
        n2=h1/3;
        h1=h1%3;
        n3=min(e1,h1);
        sum=0;

        m=c1(n1,m,a);
        m=c1(n2,m,b);
        m=c1(n3,m,c);
        // cout<<"  "<<m<<" "<<sum<<endl;
        if(m==0)
            res=min(res,sum);

        m=n;
        e1=e,h1=h;
        n1=e1/2;
        e1=e1%2;
        n3=min(e1,h1);
        h1-=n3;
        n2=h1/3;
        h1=h1%3;
        sum=0;
        m=c1(n1,m,a);
        m=c1(n3,m,c);
        m=c1(n2,m,b);
        // cout<<"  "<<m<<" "<<sum<<endl;
        if(m==0)
            res=min(res,sum);

        m=n;
        e1=e,h1=h;
        n1=e1/2;
        e1=e1%2;
        n2=h1/3;
        h1=h1%3;
        n3=min(e1,h1);
        sum=0;
        m=c1(n2,m,b);
        m=c1(n1,m,a);
        m=c1(n3,m,c);
        //cout<<"  "<<m<<" "<<sum<<endl;
        if(m==0)
            res=min(res,sum);

        m=n;
        e1=e,h1=h;
        n2=h1/3;
        h1=h1%3;
        n3=min(e1,h1);
        e1-=n3;
        n1=e1/2;
        e1=e1%2;
        sum=0;
        m=c1(n2,m,b);
        m=c1(n3,m,c);
        m=c1(n1,m,a);
        // cout<<"  "<<m<<" "<<sum<<endl;
        if(m==0)
            res=min(res,sum);

        m=n;
        e1=e,h1=h;
        n3=min(e1,h1);
        e1-=n3;
        h1-=n3;
        n1=e1/2;
        e1=e1%2;
        n2=h1/3;
        h1=h1%3;
        sum=0;
        m=c1(n3,m,c);
        m=c1(n1,m,a);
        m=c1(n2,m,b);
        // cout<<"  "<<m<<" "<<sum<<endl;
        if(m==0)
            res=min(res,sum);
        m=n;
        sum=0;
        m=c1(n3,m,c);
        m=c1(n2,m,b);
        m=c1(n1,m,a);
        // cout<<"  "<<m<<" "<<sum<<endl;
        if(m==0)
            res=min(res,sum);
        if(f==0)
            cout<<-1<<endl;
        else
            cout<<res<<endl;
    }
}

