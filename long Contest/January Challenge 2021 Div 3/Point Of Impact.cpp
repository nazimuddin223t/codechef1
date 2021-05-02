#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        ll l=0,r=0,u,d;
        ll dx=(n-x);
        ll dy=(n-y);
        if(dx==dy)
        {
            cout<<x+dx<<" "<<y+dy<<endl;
            continue;
        }
        k=(k-1)%4;
        if(dx<dy)
        {
            x+=dx;
            y+=dx;
            l=1;
        }
        else
        {
            r=1;
            x+=dy;
            y+=dy;
        }
      //  cout<<x<<" "<<y<<" "<<k<<endl;
        if(r)
        {
            if(k>=1)
            {
                dx=n-x;
                dy=y;
                ll mn=min(dx,dy);
                x+=mn;
                y-=mn;
            }
            if(k>=2)
            {
                dx=x;
                dy=y;
                ll mn=min(dx,dy);
                x-=mn;
                y-=mn;
            }
            if(k>=3)
            {
                dx=x;
                dy=n;
                ll mn=min(dx,dy);
                x-=mn;
                y+=mn;
            }
        }
        else
        {

            if(k>=1)
            {
                dx=x;
                dy=n-y;
                ll mn=min(dx,dy);
                x-=mn;
                y+=mn;
            }
            if(k>=2)
            {
                dx=x;
                dy=n;
                ll mn=min(dx,dy);
                x-=mn;
                y-=mn;
            }
            if(k>=3)
            {
                dx=n;
                dy=y;
                ll mn=min(dx,dy);
                x+=mn;
                y-=mn;
            }
        }
        cout<<x<<" "<<y<<endl;
    }

}
