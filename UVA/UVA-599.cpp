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
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000000000000000;
#define PI acos(-1)
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	    freopen("input.in", "r", stdin);

		freopen("output.out", "w", stdout);
#endif
}
map<char, vector<char>>adj;
map<char, int>vis;
map<int, int>cn;
int cnt;
void dfs(char node)
{
	cn[cnt]++;
	vis[node] = cnt;
	for (int i = 0; i < adj[node].size(); i++)
	{
		char child = adj[node][i];
		if (vis[child] == 0)
		{
			dfs(child);
		}
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int t;
	string s;
	while (cin >> t)
	{
		while (t--)
		{
			while (cin >> s&&s[0] != '*')
			{
				char u = s[1], v = s[3];
				adj[u].push_back(v);
				adj[v].push_back(u);
			}
			cin >> s;
			cnt = 0;
			for (int i = 0; i < s.size(); i += 2)
			{
				char u = s[i];
				if (vis[u] == 0)
				{
					cnt++;
					dfs(u);
				}
			}
			int tree = 0, acron = 0;
			for (auto x : cn)
			{
				if (x.second != 1)
					tree++;
				else
					acron++;
			}
			cout << "There are " << tree << " tree(s) and " << acron << " acorn(s)." << finl;
			adj.clear(), vis.clear(), cn.clear();
		}
	}
}
