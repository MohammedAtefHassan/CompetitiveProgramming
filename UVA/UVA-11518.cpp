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
		//freopen("input.in", "r", stdin);

       // freopen("output.out", "w", stdout);
#endif
}
vector<int>edg1[10001], edg2[10001], cmp[10001]; bool vis[10001],vs[10001]; int scc, id[10001];
vector<int>st; set<int>ss;
void dfs1(int u, bool flag)
{
	vis[u] = 1;
	if (flag)
	{
		for (auto v : edg1[u])
		{
			if (vis[v] == 0)
				dfs1(v, flag);
		}
		st.push_back(u);
	}
	else
	{
		id[u] = scc;
		cmp[scc].push_back(u);
		for (auto v : edg2[u])
		{
			if (vis[v] == 0)
				dfs1(v, flag);
		}
	}
}
void dfs2(int u)
{
	vis[u] = 1;
		ss.insert(id[u]);
	for (auto v : edg1[u])
	{
		if (vis[v] == 0)
		{
			dfs2(v);
		}
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int t,n,m,l,x,y;
	cin >> t;
	while (t--)
	{
		clr(vis, 0); clr(vs, 0); clr(id, 0); ss.clear(); st.clear(); scc = 0;
		cin >> n >> m >> l;
		for (int i = 1; i <= n; i++)
			edg1[i].clear(), edg2[i].clear(), cmp[i].clear();
		while (m--)
		{
			cin >> x >> y;
			edg1[x].push_back(y);
			edg2[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
			{
				dfs1(i, 1);
			}
		}
		clr(vis, 0);
		for (int i = n - 1; i >= 0; i--)
		{
			if (vis[st[i]] == 0)
			{
				scc++;
				dfs1(st[i], 0);
			}
		}
		clr(vis, 0);
		while (l--)
		{
			cin >> x;
			if (vis[x] == 0)
				dfs2(x);
		}
		int cnt = 0;
		for (auto s : ss)
		{
			cnt += cmp[s].size();
		}
		cout <<cnt << finl;
	}
}
