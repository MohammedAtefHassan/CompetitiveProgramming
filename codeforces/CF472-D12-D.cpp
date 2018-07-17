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
	//  freopen("input.in", "r", stdin);

	// freopen("output.out", "w", stdout);
#endif
}
vector<vector<pair<ll,int>>>mst;
vector<bool>vis; int n;
ll arr[2001][2001],cost[2001][2001];
void prim(int u)
{
	priority_queue<pair<ll,pair<int,int>>>q;
	q.push({ 0, { 0, u } });
	while (!q.empty())
	{
		pair<ll,pair<int,int>>p = q.top(); q.pop();
		if (vis[p.second.second])continue;
		vis[p.second.second] = 1;
		mst[p.second.first].push_back({ -p.first, p.second.second });
		mst[p.second.second].push_back({ -p.first, p.second.first});
		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
			{
				q.push({ -arr[p.second.second][i], { p.second.second, i } });
			}
		}
	}
}
int u;
void dfs(int k)
{
	vis[k] = 1;
	for (auto v : mst[k])
	{
		if (vis[v.second] == 0)
		{
			cost[u][v.second] = cost[u][k] + v.first;
			dfs(v.second);
		}
	}

}
int main()
{
	Mohammed_Atef_Hassan
		 ll x;
	cin >>n;
	mst = vector<vector<pair<ll,int>>>(n + 1, vector<pair<ll,int>>());
	vis = vector<bool>(n + 1, 0);
	
	for (int i = 1; i <=n;i++)
	for (int j = 1; j <=n; j++)
	{
		cin >> arr[i][j];
	}
	prim(1);
	for (int i = 1; i <= n; i++)
	{
		u = i;
		vis = vector<bool>(n + 1, 0);
		dfs(i);
	}
	for (int i = 1; i <= n;i++)
	for (int j = 1; j <= n;j++)
	if (cost[i][j] != arr[i][j]||arr[i][j]==0&&i!=j)
		ex("NO");
	ex("YES");
}
