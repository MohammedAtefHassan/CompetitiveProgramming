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
set<string>s;
int n, m;
ll sum;
ll arr[1000000];
bool valid(ll s)
{
	sum = 0;
	int id = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]>s)
			return false;
		sum += arr[i];
		if (sum > s)
		{
			id++;
			sum = arr[i];
		}
	}
	return id <= m;
}
ll fun(ll s)
{
	ll l = 1, r = s;
	ll mn =s;
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		if (valid(mid))
		{
			mn = min(mn, mid);
			r = mid-1;
		}
		else
			l = mid + 1;
	}
	return mn;
}
int main()
{
	Mohammed_Atef_Hassan
		ll sumt;
	while (cin >> n >> m)
	{
		sumt = 0;
		for (int i = 0; i < n; i++)
			cin >> arr[i],sumt+=arr[i];
		cout << fun(sumt) << finl;
	}

}