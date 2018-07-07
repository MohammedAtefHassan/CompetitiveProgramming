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
map<string, int>idx; map<int, string>val;
vector<int>edg[101]; int num[101], low[101], dfs_time; bool art[101];
void dfs(int u, int p = -1)
{
	num[u] = low[u] = ++dfs_time; int ch_num = 0;
	for (auto v : edg[u])
	{
		if (num[v] == 0)
		{
			dfs(v,u);
			low[u] = min(low[u], low[v]);
			if (low[v] >= num[u] && p != -1)
				art[u] = 1;
			ch_num++;
		}
		else if (p!=v)
			low[u] = min(low[u], num[v]);
	}
	if (p==-1&&ch_num > 1)
		art[u] = 1;
}
int main()
{
	Mohammed_Atef_Hassan
		int n,m; string s, t; int k = 1;
	while (cin >> n&&n)
	{
		idx.clear(); val.clear();
		for (int i = 0; i <= 100; i++)
			edg[i].clear(), num[i] = low[i] = dfs_time =art[i]= 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> s;
			idx[s] = i; val[i] = s;
		}
		cin >> m;
		while (m--)
		{
			cin >> s >> t;
			edg[idx[s]].push_back(idx[t]);
			edg[idx[t]].push_back(idx[s]);
		}
		for (int i = 1; i <= n; i++)
		{
			if (num[i] == 0)
				dfs(i);
		}
		int cnt = count(art + 1, art + n + 1, 1);
		if (k != 1)
			cout << finl;
		cout << "City map #" << k++ << ": " << cnt << " camera(s) found" << finl;
		set<string>ss;
		for (int i = 1; i <= n; i++)
		{
			if (art[i])
				ss.insert(val[i]);
		}
		for (auto x : ss)
		{
			cout << x << finl;
		}
		ss.clear();
	}
}
