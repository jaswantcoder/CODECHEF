#include <bits/stdc++.h>
#define ll long long
#define ss  ios_base::sync_with_stdio(false);cin.tie(NULL);
/*
#define fi first
#define se second
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > pii;
typedef pair< double, double > dd; 
#define mp make_pair
typedef pair< pair< int,int >, pair< string, vector< pair< int, int > > > > POS;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) c.begin(), c.end()
#define tr(c,i) for(typeof(c).begin() i = c.begin(); i != c.end(); i++)
#define present(c,x) (c.find(x) != c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
*/
using namespace std;

int countDigit(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 


int main() {
    ss;
    ll t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       ll cnt =1,tot=1,i,n=s.size();
       if(s.size()==1)
       {
           cout<<"NO"<<'\n';
           continue;
       }
       for(i=1;i<s.size();i++)
       {
          if(s[i]==s[i-1])
          cnt++;
          else
          {
              tot++;
              tot+=countDigit(cnt);
              cnt=1;
          }
          
       }
       if(s[n-1]==s[n-2])
       tot+=countDigit(cnt);
       else
       tot++;
      // cout<<tot<<'\n';
       if(tot<s.size())
       cout<<"YES"<<'\n';
       else
       cout<<"NO"<<'\n';
        
        
        
    }
	return 0;
}
