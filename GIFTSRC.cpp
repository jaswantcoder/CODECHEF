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
 
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main() {
 ll t,i,j;
    cin>>t;
 
 while(t--)
 {
  ll n;
  cin>>n;
 string s;
 cin>>s;
 char prev ='a';
 ll x=0,y=0;
 for(auto it:s)
 {
     if((it=='L' || it=='R') && (prev=='L' || prev=='R'))
     {
         ;
     }
     else if((it=='U' || it=='D') && (prev=='U' || prev=='D'))
     {
         ;
     }
     else
     {
         if(it=='L')
         x--;
         if(it=='R')
         x++;
         if(it=='U')
         y++;
         if(it=='D')
         y--;
         prev=it;
     }
 }
 cout<<x<<" "<<y<<endl;
  
 
 
 }
 
return 0;
}


