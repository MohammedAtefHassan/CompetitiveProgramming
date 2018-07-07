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
#define clr(dp,n) memset(dp,n,sizeof dp)
#define ex(n) return cout<<n<<finl,0;
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
	//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	//	freopen("input.in", "r", stdin);

		freopen("output.out", "w", stdout);
#endif
}
vector<int>edg[1001]; int num[1001], low[1001], t;bool bridge[10001][10001];
void dfs(int u, int p = -1)
{
	num[u] = low[u] = ++t;
	for (auto v : edg[u])
	{
		if (num[v] == 0)
		{
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if (num[u] < low[v])
				bridge[u][v] = 1, bridge[v][u] = 1;
		}
		else if (p != v)
			low[u] = min(low[u], num[v]);
	}
}
bool vis[1001]; bool vs[1001][1001];
void print(int u)
{
	vis[u] = 1;
	for (auto v : edg[u])
	{
		if (vs[u][v] == 0)
		{
			cout << u << " " << v << finl;
			if (bridge[u][v])
				cout << v << " " << u << finl;
			vs[u][v] = vs[v][u] = 1;
		}
		if (vis[v]==0)
		print(v);
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m; int k = 1,x,y;
	while (cin >> n >> m&&n)
	{
		clr(vis, 0); clr(bridge, 0); clr(vs, 0);
		for (int i = 0; i < 1001; i++)
			edg[i].clear(), num[i] = low[i] = t = 0;
		while (m--)
		{
			cin >> x >> y;
			edg[x].push_back(y); edg[y].push_back(x);
		}
		cout << k++ << finl << finl;
		for (int i = 1; i <= n; i++)
		{
			if (num[i] == 0)
				dfs(i);
		}
		for (int i = 1; i <= n;i++)
		if (vis[i] == 0)
			print(i);
		cout << "#" << finl;
	}
}
