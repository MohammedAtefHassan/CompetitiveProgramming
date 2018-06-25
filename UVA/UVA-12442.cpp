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
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
	//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	//	freopen("input.in", "r", stdin);

	//	freopen("output.out", "w", stdout);
#endif
}
vector<int>v[50001];
bool vis1[50001],vis2[50001];
int dfs(int node)
{
	vis1[node] = 1;
	int cnt = 0;
	int ch = v[node][0];
	if (vis1[ch] == 0)
		cnt += 1 + dfs(ch);
	vis1[node] = 0;
	vis2[node] = 1;
	return cnt;
}
void clear_vector(int n)
{
	for (int i = 0; i <= n; i++)
		v[i].clear();
}
int main()
{
	Mohammed_Atef_Hassan
		int t, n, x, y, k = 0; cin >> t;
	while (t--)
	{
		cin >> n;
		clr(vis1, 0); clear_vector(n); clr(vis2, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			v[x].push_back(y);
		}
		int mx = -1, node = 0;
		for (int i = 1; i <= n; i++)
		{
			if (vis2[i]==0)
			{
				int ret = dfs(i);
				if (mx < ret)
				{
					mx = ret;
					node = i;
				}
			}
		}
		cout << "Case "<<++k<<": "<<node<< finl;

	}
}
