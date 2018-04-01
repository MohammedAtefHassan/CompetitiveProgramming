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
void fastt(){
	fast();
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);

//	freopen("output.out", "w", stdout);
#endif
}
vector<pair<int, int>>v;
ll arr[9][9];
ll solve(int x,int y)
{
	if (v.size() == 8)
	{
		ll sum = 0;
		for (int i = 0; i < v.size(); i++)
		{
			sum += arr[v[i].first][v[i].second];
		}
		return sum;
	}
	if (x == 9||y==9)
		return 0;
	bool dx[9] = { false }, dy[9] = { false }, dm[17] = { false }, ds[17] = { false };
	for (int i = 0; i < v.size(); i++)
	{
		int a = v[i].first, b = v[i].second;
		dx[a] = dy[b] = dm[a - b + 8] = ds[a + b] = 1;
	}
	ll mx = 0;
	if (dx[x] == 0 && dy[y] == 0 && dm[x - y + 8] == 0 && ds[x + y] == 0)
	{
		v.push_back({ x, y });
		mx=max(mx,solve(x + 1, 1));
		v.pop_back();
	}
	mx=max(mx,solve(x, y + 1));
	return mx;
}
int main()
{
	Mohammed_Atef_Hassan
		int t;
	while (cin>>t)
	{
		while (t--)
		{
			for (int i = 1; i <= 8;i++)
			for (int j = 1; j <= 8; j++)
				cin >> arr[i][j];
			cout <<setw(5)<<solve(1, 1) << finl;
		}
	}
}
