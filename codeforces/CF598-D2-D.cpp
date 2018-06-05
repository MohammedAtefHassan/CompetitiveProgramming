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
char grid[1001][1001];
map<pair<int, int>, int>mp;
map<int, int>cn;
int cnt;
bool vis[1001][1001];
int n, m;
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
int dfs(int x, int y)
{
	if (x < 0 || y < 0 || x == n || y == m || vis[x][y])
		return 0;
	if (grid[x][y] == '*')
		return 1;
	vis[x][y] = 1;
	mp[{x, y}] = cnt;
	int c = 0;
	for (int i = 0; i < 4; i++)
		c += dfs(x + dx[i], y + dy[i]);
	return c;
}
int main()
{
	Mohammed_Atef_Hassan
		int k;
	cin >> n >> m >> k;
	for (int i = 0; i < n;i++)
	for (int j = 0; j < m; j++)
	{
		cin >> grid[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (grid[i][j] == '.'&&vis[i][j] == false)
			{
				cnt++;
				cn[cnt] = dfs(i, j);
			}
		}
	}
	int x, y;
	while (k--)
	{
		cin >> x >> y;
		x--; y--;
		int b = mp[{x, y}];
		cout << cn[b] << finl;
	}
} 
