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
#define INF LLONG_MAX
#define PI acos(-1)
#define clr(dp,n) memset(dp,n,sizeof dp)
#define ex(n) return cout<<n<<finl,0;
int dx[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
	//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);

	freopen("output.out", "w", stdout);
#endif
}
vector<vector<int>>edg;
vector < vector<int>>bridge;
int cmp_id[10001], cmp, num[10001], low[10001], T; bool vis[10001];
void trajan(int u, int p = -1)
{
	num[u] = low[u] = ++T;
	for (auto v : edg[u])
	{
		if (num[v] == 0)
		{
			trajan(v, u);
			low[u] = min(low[u], low[v]);
			if (low[v] > num[u])
			{
				bridge[u].push_back(v);
				bridge[v].push_back(u);
			}
		}
		else if (v != p)
			low[u] = min(low[u], num[v]);
	}
}
void dfs(int u)
{
	cmp_id[u] = cmp;
	vis[u] = 1;
	for (auto v : bridge[u])
	if (vis[v] == 0)
		dfs(v);
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m, q,x,y;
	while (cin >> n >> m >> q&&n&&m&&q)
	{
		edg = vector<vector<int>>(n + 1, vector<int>());
		bridge = vector<vector<int>>(n + 1, vector<int>());
		clr(cmp_id, 0); cmp = 0; clr(num, 0); clr(low, 0); clr(vis, 0), T = 0;
		while (m--)
		{
			cin >> x >> y;
			edg[x].push_back(y);
			edg[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			if (num[i] == 0)
				trajan(i);
		}
		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
			{
				cmp++;
				dfs(i);
			}
		}
		while (q--)
		{
			cin >> x >> y;
			if (cmp_id[x] == cmp_id[y])
				cout << "Y" << finl;
			else
				cout << "N" << finl;
		}
		cout << "-" << finl;
	}
}
