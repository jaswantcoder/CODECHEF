#include <bits/stdc++.h>
#define  ll long long
#define mp make_pair
#define pll pair<ll,ll>
#define pb push_back
#define vl vector<ll>
#define vs vector<string>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define vi vector<int>
#define maxn 200005
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define db double
#define fi first
#define se second

#define PI 3.14159265
using namespace std;



int main()
{


  fast;
  ll t,i,j,k,T,n,l;
  cin>>T;

  for(t=1;t<=T;t++)
  {
    cin>>n>>k;
    string s;
    cin>>s;
    vl v;
    bool f=true;
    ll f1=0,end1=0,zeros=0,disc=0,cnt=0;
    for(auto it:s)
    {

     if(it=='0' && f)
     {
       //  cout<<"d";
           f1++;
     }
     else if(it=='1' && f)
     {
     f=false;
     }
   else if(it=='0')
    cnt++;
    else
    {
    v.pb(cnt);
    cnt=0;
    }


    }
    bool ones=false;
    for(auto it :s)
    {
    if(it=='1')
        ones=true;
    }
    if(ones==false)
    {
    cout<<"0"<<endl;
    continue;
    }

       end1=cnt;

      sort(all(v));
   //  cout<<f1<<" "<<v[0]<<end1<<endl;
      for(auto it:v)
      {
      disc+=it;
      }
      disc+=f1+end1;

   //   cout<<disc;

      if(k&1)
      {
     if(end1>f1)
     {
     disc-=end1;
     end1=0;
     }
     else {
        disc-=f1;
        f1=0;
     }

      }
      i=v.size()-1;

   //   cout<<disc<<v[0]<<v[1]<<f1<<end1;
      while(k-2>=0 && disc>0)
      {
          if(i>=0 && v[i]>end1+f1)
          {

               disc-=v[i];
          i--;


          }
          else if(end1+f1>0)
          {
          disc-=end1+f1;
          end1=0;
          f1=0;

          }
         k-=2;
  //  cout<<disc;
      }


     cout<<disc<<endl;

}






return 0;
}
