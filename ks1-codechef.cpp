//author:satwik_bhv1
#include<bits/stdc++.h>
//datatypes
#define ll long long
#define ld long double
//loops
#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)
//operations
#define mp  make_pair
#define ff 	first
#define ss 	second
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
//deque
#define dki deque <ll>
#define dkc deque <char>
//map
#define mi map<ll, ll>
#define mf map<ld, ld>
//vectors
#define vi vector<ll>
#define vc vector<char>
#define vpi vector< pair <ll,ll> >
#define vpc vector<pair <char,char> > 
#define vpic vector<pair <ll,char> > 
#define vpci vector<pair <char,ll> > 
//constants
#define pi 3.1415926535897932384626
#define mod  998244353
#define llmax 9223372036854775807
#define llmin -9223372036854775808
/*notes
	range of longlong=(-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 )
	INT_MAX = 2147483647
	INT_MIN = -2147483648
*/
//start
using namespace std;
//functions
void fast() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }
bool sortbysec(const pair<ll, ll>& a, const pair<ll, ll>& b) { return (a.second < b.second); }
ll sumPairs(vi arr,ll n) 
{ 
    ll result = 0; 
    br(i,n-1,-1)
    {
        result += i*arr[i] - (n-1-i)*arr[i]; 
    }
    return result-((n*(n-1))/2); 
} 
int main()
{
	fast();
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vi a,c;
		vpi b;
		fr(i, 0, n)
		{
			ll w;
			cin >> w;
			a.pub(w);
		}
		b.pub(mp(0,-1));
		fr(i, 0, n)
		{
		    b.pub(mp((b[i].ff ^ a[i]),i));
		}
		sort(b.begin(),b.end());
		ll ans=0,cnt=0;
		fr(u,1,b.size())
		{
		    vi v;
		    ll i,k;
		    while(u<b.size()&&b[u].ff==b[u-1].ff)
		    {
		        cnt++;
		        i=b[u-1].ss+1;
		        k=b[u].ss;
		        if(cnt==1)
		        {
		            v.pub(i);
		        }
		        v.pub(k+1);
		        u++;
		    }
		    if(u>=b.size())
		    {
		        ans+=sumPairs(v,v.size());
		        cnt=0;
		        //v.clear();
		        goto lbl;
		    }
		    else
		    {
		        ans+=sumPairs(v,v.size());
		        cnt=0;
		        //v.clear();
		    }
		}
		lbl:cout<<ans<<"\n";
	}
	return 0;
}
