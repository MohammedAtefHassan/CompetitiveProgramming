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

#ifndef ONLINE_JUDGE
	//	freopen("input.in", "r", stdin);

	//	freopen("output.out", "w", stdout);
#endif
}
vector<int>v[10000];
int vis[10000];
void bfs(int node)
{
	queue<int>q;
	vis[node] = 0;
	q.push(node);
	while (!q.empty())
	{
		int per = q.front();
		q.pop();
		for (int i = 0; i < v[per].size(); i++)
		{
			int child = v[per][i];
			if (vis[child] == -1)
			{
				vis[child] = vis[per] + 1;
				q.push(child);
			}
		}
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int n, x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x == -1)
			x = 0;
			v[x].push_back(i);
	}
	memset(vis, -1, sizeof vis);
	bfs(0);
	cout << *max_element(vis, vis + n + 1) << finl;
}
