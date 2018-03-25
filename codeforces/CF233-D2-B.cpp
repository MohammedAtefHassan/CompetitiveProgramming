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
#define INF 1000000000000000000;
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
int main()
{
	Mohammed_Atef_Hassan
		ll n;
	cin >> n;
	ll x = (ll)sqrt(n);
	ll y;
	if (x <= 100)
		y = 1;
	else
		y = x - 100;
	for (ll i = y; i <= x; i++)
	{
		ll sum = 0;
		ll m = i;
		for (int j = 0; m; j++)
		{
			sum += m % 10;
			m /= 10;
		}
		if (i*i + sum*i - n == 0)
		{
			return cout << i << finl, 0;
		}
	}
	cout << -1 << finl;
}
