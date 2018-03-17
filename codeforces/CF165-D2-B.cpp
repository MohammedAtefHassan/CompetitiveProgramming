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
ll n, k;
bool valid(ll s)
{
	ll sum = 0;
	ll po = 1;
	while (s / po)
	{
		sum += s / po;
		po *= k;
	}
	return sum >= n;
}
ll fun(){
	ll l = 1, r =INF;
	ll mn = INF;
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		if (valid(mid))
		{
			r = mid - 1;
			mn = min(mn, mid);
		}
		else
			l = mid + 1;
	}
	return mn;
}
int main()
{
	Mohammed_Atef_Hassan
		
	cin >> n >> k;
	cout << fun() << finl;


}