#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000
#define PI acos(-1)
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
#endif
}
vector<int>emp[101];
vector<int>lan[101];
int cnt; bool vis[101];
void dfs(int node)
{
	vis[node] = true;
	for (auto l : emp[node])
	{
		for (auto x : lan[l])
		{
			if (vis[x] == false)
			{
				dfs(x);
			}
		}
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m, x;
	cin >> n >> m;
	bool b = true;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		if (k)
			b = false;
		while (k--)
		{
			cin >> x;
			emp[i].push_back(x);
			lan[x].push_back(i);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == false)
		{
			cnt++;
			dfs(i);
		}
	}
	if (b)
		cout << n << finl;
	else
	cout << cnt - 1 << finl;
} 
