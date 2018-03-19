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
int n;
ll k;
ll a[1000000], b[1000000];
bool valid(ll mid)
{
	ll s = k,x;
	if (mid == 0)
		return true;
	for (int i = 0; i < n; i++)
	{
		x = mid*a[i];
		if (x>b[i])
		{
			if (s == 0||x-b[i]>s)
				return false;
			s -= x - b[i];
		}

	}
	return true;
}
ll fun()
{
	ll l = 0, r = 10000000000;
	ll cnt=0;
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		if (valid(mid))
		{
			cnt = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	return cnt;
}
int main()
{
	Mohammed_Atef_Hassan
		cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	cout << fun() << finl;
}