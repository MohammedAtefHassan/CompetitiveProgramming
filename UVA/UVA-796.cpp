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
		freopen("input.in", "r", stdin);

		freopen("output.out", "w", stdout);
#endif
}
vector<int>edg[1001]; int num[1001], low[1001], dfs_time;
set<pair<int, int>>bridge;
void dfs(int u, int p = -1)
{
	num[u] = low[u] = ++dfs_time;
	for (auto v : edg[u])
	{
		if (num[v] == 0)
		{
			dfs(v,u);
			low[u] = min(low[u], low[v]);
			if (low[v] > num[u])
				bridge.insert({ min(u, v), max(u, v) });
		}
		else if (p!=v)
			low[u] = min(low[u], num[v]);
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int n; int x,k,y; char c;
	while (cin >> n)
	{
		for (int i = 0; i < 1001; i++)
			edg[i].clear(), num[i] = low[i] = dfs_time = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> c >> k >> c;
			while (k--)
			{
				cin >> y;
				edg[x].push_back(y);
				edg[y].push_back(x);
			}
		}
		bridge.clear();
		for (int i = 1; i <= n;i++)
		if (num[i] == 0)
			dfs(i);
		cout << bridge.size() << " critical links" << finl;
		for (auto s : bridge)
		{
			cout << s.first << " - " << s.second << finl;
		}
		cout << finl;
	}
}
