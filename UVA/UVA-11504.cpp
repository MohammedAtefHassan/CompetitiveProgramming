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
vector<int>edg[100001]; bool vis[100001];
void dfs(int u)
{
	vis[u] = 1;
	for (auto v : edg[u])
	{
		if (vis[v] == 0)
			dfs(v);
	}
}
stack<int>s;
int main()
{
	Mohammed_Atef_Hassan
		int t,n,m,x,y;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 0; i <= n; i++)
			edg[i].clear();
		while (m--)
		{
			cin >> x >> y;
			edg[x].push_back(y);
		}
		clr(vis, 0);
		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
			{
				s.push(i);
				dfs(i);
			}
		}
		int cnt = 0;
		clr(vis, 0);
		while (!s.empty())
		{
			int u = s.top(); s.pop();
			if (vis[u] == 0)
			{
				cnt++;
				dfs(u);
			}
		}
		cout << cnt << finl;
	}
}
