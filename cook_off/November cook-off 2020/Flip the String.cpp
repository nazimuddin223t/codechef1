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
        string  str,str1;
        cin>>str>>str1;
        n=str.size();
        ll r=0;
        ll f=1;
        for(ll i=0; i<n; i++)
        {
            if(f&&i%2==0&&str[i]!=str1[i])
            {
                f=0;
                r++;
            }
            else if(i%2==1&&str[i]!=str1[i])
                r++;
        }
        f=1;
        ll r1=0;
        for(ll i=1; i<n; i++)
        {
            if(f&&i%2==1&&str[i]!=str1[i])
            {
                f=0;
                r1++;
            }
            else if(i%2==0&&str[i]!=str1[i])
                r1++;
        }
        if(str[0]!=str1[0])
            r1++;
        cout<<min(r,r1)<<endl;
    }
    return 0;

}
