#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define sz(n) (int)n.size()
#define pb(s) push_back(s);
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fastt();
#define mod 1000000007
#define INF 1000000000000000000
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
void infile()
{
	freopen("input.in", "r", stdin);
}
void outfile()
{
	freopen("output.in", "w", stdout);
}

void fastt(){
	fast();
	//   infile();
	//	outfile();
}
ll n, s;
ll arr[1000000];
ll sum[1000000];
ll valid(ll x)
{
	ll sum1 = 0;
	for (ll i = 1; i <= n; i++)
	{
		sum[i] = arr[i] + i*x;
	}
	sort(sum + 1, sum + n + 1);
	for (ll i = 1; i <= x; i++)
		sum1 += sum[i];
	return sum1;
}
pair<ll, ll>fun()
{
	ll l = 0, r = n;
	pair<ll, ll>mx;
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		ll x = valid(mid);
		if (x<= s)
		{
			l = mid + 1;
			mx = make_pair(mid, x);
		}
		else
			r = mid - 1;
	}
	return mx;
}
int main()
{
	Mohammed_Atef_Hassan
		cin >> n >> s;
	for (int i = 1; i <=n; i++)
		cin >> arr[i];
	
	pair<ll, ll>x = fun();

	cout << x.first << " " << x.second << finl;
}