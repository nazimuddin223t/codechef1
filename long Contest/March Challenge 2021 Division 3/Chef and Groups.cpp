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
           string str;
           cin>>str;
           n=str.size();
           ll cnt=0;
           if(str[0]=='1')
            cnt++;
           for(ll i=1;i<n;i++)
           {
                 if(str[i]!=str[i-1]&&str[i]!='0')
                  cnt++;
           }
           cout<<cnt<<endl;



      }
}

