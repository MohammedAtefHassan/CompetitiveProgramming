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

  	freopen("output.out", "w", stdout);
#endif
}
vector<pair<int, int>>v;
vector<int>s(8);
map<pair<int, int>, set<vector<int>>>mp;
void solve(int x,int y)
{
	if (v.size() == 8)
	{
		for (int i = 0; i < v.size(); i++)
			s[v[i].second-1] = v[i].first;

		for (int i = 0; i < v.size(); i++)
			mp[{v[i].first, v[i].second}].insert(s);

		return;
	}
	if (x == 9||y==9)
		return;

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
		solve(x + 1, 1);
		v.pop_back();
	}
	solve(x, y + 1);
}
int main()
{
	Mohammed_Atef_Hassan

		solve(1, 1);

	int t,x,y;

	while (cin >> t)
	{
		while (t--)
		{
			cin >> x >> y;
			cout << "SOLN       COLUMN" << finl;
			cout << " #      1 2 3 4 5 6 7 8" << finl;
			cout << finl;
			int k = 1;
			for (set<vector<int>>::iterator i = mp[{x, y}].begin(); i != mp[{x, y}].end(); i++)
			{
				if (k < 10)
					cout << " ";
				cout<<k++ << "     ";
				for (int j = 0; j <i->size(); j++)
				{
					cout << " " << (*i)[j];
				}
				cout << finl;
			}
			if (t>0)
				cout << finl;
		}
	}
}
