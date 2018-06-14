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
vector<int>v[100000];
int par[100000];
bool vis[100000];
void dfs(int node)
{
	if (vis[node])
		return;
	vis[node] = 1;
	for (auto ch : v[node])
	{
		if (vis[ch] == 0)
		{
			par[ch] = node;
			dfs(ch);
		}
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int n, r1, r2, x;
	cin >> n >> r1 >> r2;
	for (int i = 1; i <= n; i++)
	{
		if (i == r1)
			continue;
		cin >> x;
		v[x].push_back(i);
		v[i].push_back(x);
	}
	dfs(r2);
	for (int i = 1; i <= n; i++)
	{
		if (i == r2)
			continue;
		cout << par[i] << " ";
	}
	cout << finl;
}
