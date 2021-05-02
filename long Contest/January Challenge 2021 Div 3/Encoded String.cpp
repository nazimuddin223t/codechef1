
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
        cin>>n;
        string str;
        cin>>str;
        ll mn=1,mx=16;
        for(ll i=1; i<=n; i++)
        {
            char ch=str[i-1];
            if(i%4==1)
            {
                mx=16;
                mn=1;
                if(ch=='1')
                    mn+=8;
                else
                    mx-=8;
            }
            else if(i%4==2)
            {
                if(ch=='1')
                    mn+=4;
                else
                    mx-=4;
            }
            else if(i%4==3)
            {
                if(ch=='1')
                    mn+=2;
                else
                    mx-=2;
            }
            else
            {
                if(ch=='1')
                    mn+=1;
                else
                    mx-=1;
                cout<<char('a'+mn-1);
            }

        }
        cout<<endl;

    }
}
