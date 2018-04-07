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
	//freopen("output.out", "w", stdout);
#endif
}
vector<pair<int, ll> >adj[100001];
bool vis[100001];
ll w[100001];
ll mx;
ll dfs(int node)
{
	vis[node] = true;
	ll x = 0;
	for (auto ch : adj[node])
	{
		if (!vis[ch.first])
		{
			w[ch.first] = w[node] + ch.second;
			mx = max(mx, w[ch.first]);
			x += ch.second + dfs(ch.first);
		}
	}
	return x;
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m, u, v; ll we;
	cin >> n;
	for (int i = 1; i <n; i++)
	{
		cin >> u >> v >> we;
		adj[u].push_back({ v, we });
		adj[v].push_back({ u, we });
	}
	cout << 2*dfs(1) - mx << finl;
}
