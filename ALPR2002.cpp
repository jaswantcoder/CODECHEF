#include <bits/stdc++.h>
#include<queue>
#include <iostream>
#include<cstdio>
#define  ll long long
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define pll pair<ll,ll>
#define vll vector<ll>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define ss  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define vi vector<int>
#define vl vector<ll>
#define maxn 200005
#define db double
#define fi first
#define se second
#define ll long long 
//#define for(i,n) for(i=0;i<n;i++)
using namespace std;
 

int main() {
 ll t,i,j;
    cin>>t;
 while(t--)
 {
 ll n;
 cin>>n;
 vector<ll> y(n);
  vector<ll> x(n);
 long double s;
 for(i=0;i<n;i++)
 {
     cin>>y[i];
 }
 bool f=true;
 for(i=0;i<n;i++)
 cin>>x[i];
 sort(all(y));
 sort(all(x));
  s=((y[1]-y[0])*1.0)/(x[1]-x[0]);
 for(i=1;i<n;i++)
 {
     double c=((y[i]-y[0])*1.0)/(x[i]-x[0]);
   if(c!=s)
   f=false;
 }
 ll ans=0;
 if(f)
 ans++;
 reverse(x.begin(), x.end());
 f=true;
 s=((y[1]-y[0])*1.0)/(x[1]-x[0]);
  for(i=1;i<n;i++)
 {
     double c=((y[i]-y[0])*1.0)/(x[i]-x[0]);
   if(c!=s)
   f=false;
 }
 if(f)
 ans++;
 cout<<ans<<endl;
 
 
 
     
 }
 
return 0;
}
