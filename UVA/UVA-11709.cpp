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

		//freopen("output.out", "w", stdout);
#endif
}
vector<int>edg1[1001], edg2[1001]; bool vis[1001];
map<string, int>idx;
stack<int>st;
void dfs(int u,bool flag)
{
	vis[u] = 1;
	if (flag)
	{
		for (auto v : edg1[u])
		if (vis[v] == 0)
			dfs(v,flag);
		st.push(u);
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
		int n, m; string s; string x="",y;
	while (cin >> n >> m&&n)
	{
		
		for (int i = 1; i <= n; i++)
			edg1[i].clear(), edg2[i].clear();
		clr(vis, 0); idx.clear();
		cin.ignore();
		for (int i = 1; i <= n; i++)
		{
			getline(cin, s, '\n');
			idx[s] = i;
		}
		for (int i = 1; i <= 2 * m; i++)
		{
			getline(cin, s, '\n');
			if (x == "")
				x = s;
			else
			{
				y = s;
				edg1[idx[x]].push_back(idx[y]);
				edg2[idx[y]].push_back(idx[x]);
				y = x = "";
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
				dfs(i, 1);
		}
		clr(vis, 0); int scc = 0;
		while (!st.empty())
		{
			int u = st.top(); st.pop();
			if (vis[u] == 0)
			{
				scc++;
				dfs(u, 0);
			}
		}
		cout << scc << finl;
	}

}
