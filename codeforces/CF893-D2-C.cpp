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

	//freopen("output.out", "w", stdout);
#endif
}
ll arr[100001];
vector<int>v[100001];
bool vis[100001];
ll dfs(int x)
{
	if (vis[x])
		return arr[x];
	vis[x] = 1;
	ll mn = arr[x];
	for (auto c : v[x])
		mn = min(mn, dfs(c));
	return mn;
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m;
	int x, y;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	while (m--)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	ll cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (vis[i]==0)
		cnt += dfs(i);
	}
	cout << cnt << finl;
} 
