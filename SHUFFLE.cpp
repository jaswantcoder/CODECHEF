#include <bits/stdc++.h>
#include<queue>
#include <iostream>
#include<cstdio>
#define  ll long long
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define pll pair<ll,ll>
#define vl vector<ll>
#define vs vector<string>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define vi vector<int>
#define maxn 200005
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define db double
#define fi first
#define se second
using namespace std;

int num(char x)
{
    return int(x)-'0';
}



int main()
{


  fast;
  ll t;
  cin>>t;
  while(t--)
  {
     ll n,i,s,x,f=100,d=100,k,j;
     cin>>n>>k;
     vl v(n);
     for(i=0;i<n;i++)
     {
         cin>>v[i];
     }
     vl vv;
     for(i=0;i<k;i++)
     {
          for(j=i;j<n;j+=k)
          {
              vv.pb(v[j]);
          }
          sort(all(vv));
          j=i;
          for(auto &it: vv)
          {
              v[j]=it;
              j+=k;
          }
          vv.clear();
     }

   for(i=0;i<n-1;i++)
   {
      // cout<<v[i]<<" ";
       if(v[i]>v[i+1])
       {
           f=0;
           break;
       }
   }

    if(f)
        cout<<"yes"<<endl;
     else cout<<"no"<<endl;
  }
return 0;
}
