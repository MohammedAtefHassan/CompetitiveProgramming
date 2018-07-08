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

		//freopen("output.out", "w", stdout);
#endif
}
vector<int>edg1[1000001], edg2[1000001]; bool vis[1000001];
vector<int>st;
void dfs(int u,bool flag)
{
	vis[u] = 1;
	if (flag)
	{
		for (auto v : edg1[u])
		if (vis[v] == 0)
			dfs(v,flag);
		st.push_back(u);
	}
	else
	{
		for (auto v : edg2[u])
		if (vis[v] == 0)
			dfs(v, flag);
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m,x,y;
	while (cin >> n >> m&&n)
	{
		clr(vis, 0);
		st.clear();
		for (int i = 0; i <= n; i++)
			edg1[i].clear(), edg2[i].clear();
		while (m--)
		{
			cin >> x >> y;
			edg1[x].push_back(y);
			edg2[y].push_back(x);
		}
		for (int i = 1; i <= n;i++)
		if (vis[i] == 0)
			dfs(i, 1);
		clr(vis, 0);
		int scc = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			int u = st[i];
			if (vis[u] == 0)
			{
				scc++;
				dfs(u, 0);
			}
		}
		if (scc != n)
			cout << "IMPOSSIBLE" << finl;
		else
		{
			for (int i = n - 1; i >= 0; i--)
				cout << st[i] << finl;
		}
	}

}
