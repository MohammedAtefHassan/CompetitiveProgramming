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
vector<int>edg[1001]; bool art[1001]; int num[1001], low[1001],t;
void dfs(int u, int p = -1)
{
	num[u] = low[u] = ++t;
	int ch = 0;
	for (auto v : edg[u])
	{
		if (num[v] == 0)
		{
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			ch++;
			if (low[v] >= num[u] && p != -1)
				art[u] = 1;
		}
		else if (p!=v)
			low[u] = min(low[u], num[v]);
	}
	if (p==-1&&ch > 1)
		art[u] = 1;
}
int main()
{
	Mohammed_Atef_Hassan
		int n; int x, y; string s;
	while (cin >> n&&n)
	{
		for (int i = 0; i <= n; i++)
			edg[i].clear(), num[i] = low[i] = t = art[i]=0;
		while (getline(cin, s, '\n') && s != "0")
		{
			x = -1;
			y = 0;
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] != ' ')
					y = y * 10 + (int)(s[i] - '0');
				if (s[i] == ' '||i==s.size()-1)
				{
					if (x == -1)
						x = y;
					else
					{
						edg[x].push_back(y);
						edg[y].push_back(x);
					}
					y = 0;
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (num[i] == 0)
				dfs(i);
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++)
			cnt += art[i];
		cout << cnt << finl;
	}
}
