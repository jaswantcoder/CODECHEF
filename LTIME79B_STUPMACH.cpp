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
      ll n;
      cin>>n;
      ll a[n],i;
      for(i=0;i<n;i++)
      cin>>a[i];
      ll s=a[0],sum=a[0];
      for(i=1;i<n;i++)
      {
          if(s>a[i])
          s=a[i];
          sum+=s;
      }
      cout<<sum<<'\n';
        
        
    }
	return 0;
}
