#include<bits/stdc++.h>

#define ll long long

#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)

#define mp make_pair
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front

#define dki deque <ll>
#define dkc deque <char>

#define vi vector<ll>
#define vc vector<char>
#define vpi vector<pair<ll,ll>> 
#define vpc vector<pair<char,char>> 
#define vpic vector<pair<ll,char>> 
#define vpci vector<pair<char,ll>> 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll t,a,b,c,n,flag,flag2;
    cin>>t;
    while(t--)
    {
		cin>>a;
		n=1;
		flag=1;
		flag2=1;
		while(flag2==1)
		{
			b=pow(2,n)-1;
			if(flag==1&&a<=pow(2,n-1))
			{
				flag=0;
				c=n-1;
			}
			else
			{
				if((n*a)-b<=0)
				{
					cout<<n-1<<" "<<c<<"\n";
					flag2=0;
				}
			}
			n++;
		}
	}
}
